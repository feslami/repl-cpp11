
#include <music.h>

using namespace std;

Music::Music(const string& album, const string& author, const string& title) noexcept
: m_album(album)
, m_author(author)
, m_title(title)
{}

const string& Music::album() const noexcept { return m_album; }

const string& Music::author() const noexcept { return m_author; }

const string& Music::title() const noexcept { return m_title; }

bool Music::operator==(const Music& rhs)
{
    return (m_album == rhs.album() && m_author == rhs.author() && m_title == rhs.title());
}


ostream& operator<<(ostream& out, const Music& music)
{
    out << "Music("
        << music.album() << ", "
        << music.author() << ", "
        << music.title() << ")";
    return out;
}

