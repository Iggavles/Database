public abstract class Azione
{
    private:
        string nome;
    public:
        Azione(string s)
        {
            nome=s;
        }
        //void esegui();
        void dettagli();
        void debug()
        {
            std:cout c << "Il mio nome è " << c.nome << "\n" << dettagli() << "\n";
        }
}

class Tweet : Azione
{
    private:
        string messaggio;
    public:
        Tweet(string s)
        {
            super(s);
            messaggio=m;
        }
        string dettagli()
        {
            return messaggio;
        }
}

class Email : Azione
{
    private:
        string messaggio;
        string destinatario;
    public:
        Tweet(string s, string d)
        {
            super(s);
            destinatario=d;
            messaggio=m;
        }
        string dettagli()
        {
            return messaggio;
        }
}