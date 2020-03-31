#pragma once

#include <string>
#include <ostream>

class Music
{
public:
    Music(const std::string& album, const std::string& author, const std::string& title) noexcept;
    const std::string& album() const noexcept;
    const std::string& author() const noexcept;
    const std::string& title() const noexcept;

    bool operator==(const Music& rhs);

private:
    const std::string& m_album;
    const std::string& m_author;
    const std::string& m_title;
};

std::ostream& operator<<(std::ostream& out, const Music& music);