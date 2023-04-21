#include <iostream>

using namespace std;


class morpion{
    private:
       char grille[3][3];
       void Affichage();

       int gagnant(char c);
    public:
        morpion();
        ~morpion();
        void Partie();
        int verification(int i,int j);
};

morpion::morpion(){
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            grille[i][j]=' ';
        }
    }

};

morpion::~morpion(){
    cout<<"Destruction de la partie"<<endl;
};

void morpion:: Affichage(){
    for (int i=0;i<3;i++){
            cout<<"________________"<<endl;
        for(int j=0;j<3;j++){
                cout<<grille[i][j]<<"  |  ";
            }
        cout<<endl;
        }
    cout<<"________________"<<endl;
};

void morpion:: Partie(){
    int x,y;
    char choix;
    line3 : cout<<"Bienvenue à une nouvelle partie de tic tac toe"<<endl;
    for (int i=0;i<9;i++){
        if(i%2==0){
            line1 : cout<<"Joueur 1 : Veuillez sasir les coordonnées de la case à cocher"<<endl;
            cin>>x>>y;
            if (verification(x,y)==1){
                cout<<"Veuillez choisir une autre case "<<endl;
                goto line1;
            }else{
                grille[x][y]='X';
                Affichage();
                
            }
            if(gagnant('1')==1){
                cout<<"Félicitations au jour 1 !!!"<<endl;
                break;
                cout<<"Voulez-vouz rejouer [O/N]"<<endl;
                cin>>choix;
                if(choix=='O')
                    goto line3;
            }else
                cout<<"Le jeu continue"<<endl;
        }
        else{
            line2 : cout<<"Joueur 2 : Veuillez sasir les coordonnées de la case à cocher"<<endl;
            cin>>x>>y;
            if(verification(x,y)==1){
                cout<<"Veuullez choisir une autre case"<<endl;
                goto line2;
            }else{
                grille[x][y]='O';
                Affichage();
            }
            if(gagnant('2')==1){
                cout<<"Félicitations au jour 1 !!!"<<endl;
                break;
                cout<<"Voulez-vouz rejouer [O/N]"<<endl;
                cin>>choix;
                if(choix=='O')
                    goto line3;
            }else
                cout<<"Le jeu continue"<<endl;
            if(i==9){
                cout<<"La partie est nulle. Voulez-vouz rejouer [O/N]"<<endl;
                cin>>choix;
                if(choix=='O')
                    goto line3;
            }
            
        }
        
    }
};

int morpion::verification(int i,int j){

    if(grille[i][j]!=' '){
                return 1;
        }else
           return 0;
};

int morpion::gagnant(char c){
    if (c=='1'){
        cout<<"********joueur 1********"<<endl;
        if ( grille[0][0]=='X'
            && grille[0][1]=='X'
            && grille[0][2]=='X')
            return 1;
        else if( grille[1][0]=='X'
                && grille[1][1]=='X'
                && grille[1][2]=='X')
            return 1;
        else if( grille[2][0]=='X'
                && grille[2][1]=='X'
                && grille[2][2]=='X')
            return 1;
        else if( grille[0][1]=='X'
                && grille[1][1]=='X'
                && grille[2][1]=='X')
            return 1;
        else if( grille[0][0]=='X'
                && grille[1][0]=='X'
                && grille[2][0]=='X')
            return 1;
        else if( grille[0][2]=='X'
                && grille[1][2]=='X'
                && grille[2][2]=='X')
            return 1;
        else if( grille[0][2]=='X'
                && grille[1][1]=='X'
                && grille[2][0]=='X')
            return 1;
        else if( grille[0][0]=='X'
                && grille[1][1]=='X'
                && grille[2][2]=='X')
            return 1;
        else
            return 0;
    }
        else if(c=='2'){
        cout<<"*********joueur 2********"<<endl;
        if ( grille[0][0]=='O'
            && grille[0][1]=='O'
            && grille[0][2]=='O')
            return 1;
        else if( grille[1][0]=='O'
                && grille[1][1]=='O'
                && grille[1][2]=='O')
            return 1;
        else if( grille[2][0]=='O'
                && grille[2][1]=='O'
                && grille[2][2]=='O')
            return 1;
        else if( grille[0][1]=='O'
                && grille[1][1]=='O'
                && grille[2][1]=='O')
            return 1;
        else if( grille[0][0]=='O'
                && grille[1][0]=='O'
                && grille[2][0]=='O')
            return 1;
        else if( grille[0][2]=='O'
                && grille[1][2]=='O'
                && grille[2][2]=='O')
            return 1;
        else if( grille[0][2]=='O'
                && grille[1][1]=='O'
                && grille[2][0]=='O')
            return 1;
        else if( grille[0][0]=='O'
                && grille[1][1]=='O'
                && grille[2][2]=='O')
            return 1;
        else
            return 0;
        }
        
};

int main(){
        morpion P1;
        P1.Partie();
        return 0;
}

