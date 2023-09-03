#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

void showInstructions(){
    char c;
    system("cls");
    cout<<"=====| GAME RULES |====="<<endl<<endl;
    cout<<"1.The game is played on a grid that's 3 squares by 3 squares. \n2. You are X , your friend (or the computer in this case) is O . Players take turns putting their marks in empty squares.\n3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie."<<endl<<endl<<endl;
    cin.get(c);
}
void showBoard(char arr[]){
    system("cls");
    cout<<"-------------"<<endl;
    cout<<"| "<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<" |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"| "<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<" |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"| "<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<" |"<<endl;
    cout<<"-------------"<<endl;
}
bool checkWon(char arr[]){
    if(arr[0]==arr[1] && arr[1]==arr[2]){
        return true;
    }
    else if(arr[3]==arr[4] && arr[4]==arr[5]){
        return true;
    }
    else if(arr[6]==arr[7] && arr[7]==arr[8]){
        return true;
    }
    else if(arr[0]==arr[3] && arr[3]==arr[6]){
        return true;
    }
    else if(arr[1]==arr[4] && arr[4]==arr[7]){
        return true;
    }
    else if(arr[2]==arr[5] && arr[5]==arr[8]){
        return true;
    }
    else if(arr[0]==arr[4] && arr[4]==arr[8]){
        return true;
    }
    else if(arr[2]==arr[4] && arr[4]==arr[6]){
        return true;
    }
    return false;
}

int main(){
    system("cls");
    int firstChoice;
    cout<<"==========|| Welcome to TIC-TAC-TOE game ||=========="<<endl<<endl;
    while(true){
    cout<<"Choose an option from below:"<<endl;
    cout<<"1. Play Game"<<endl<<"2. Learn how to play?"<<endl<<"3. Exit"<<endl;
    cin>>firstChoice;
    if(firstChoice==1){
        int turn=0;
        char values[9] = {'1','2','3','4','5','6','7','8','9'};
        for(int i=0; i<9; i++){
            showBoard(values);
            int num;
            if(turn%2==0){
                cout<<"Player O turn...Enter number(1-9):"<<endl;
                bool valid = 0;
                while(!valid){
                    cin>>num;
                    if(values[num-1]=='X' ||values[num-1]=='O' || num>9){
                        cout<<"You can't replace that box, please enter valid number"<<endl;
                    }
                    else{
                        valid = 1;
                    }
                }
                values[num-1]='O';
                if(checkWon(values)){
                    cout<<"Congratulatiuons! Player O won the match;"<<endl;
                    break;
                    
                }
            }
            else{
                cout<<"Player X turn...Enter number(1-9):"<<endl;
                bool valid = 0;
                while(!valid){
                    cin>>num;
                    if(values[num-1]=='X' ||values[num-1]=='O' || num>9){
                        cout<<"You can't replace that box, please enter valid number"<<endl;
                    }
                    else{
                        valid = 1;
                    }
                }
                values[num-1]='X';
                if(checkWon(values)){
                    cout<<"Congratulatiuons! Player X won the match;"<<endl;
                    break;
                    
                }
            }
            turn++;
            if(i==8){
                cout<<"Match Draw!"<<endl;
            }
            
        }
    }
    else if(firstChoice==2){
        showInstructions();
        cout<<"Press any key to continue-"<<endl;
        cin.get();
        continue;
    }
    else if(firstChoice==3){
        return 0;
    }
    else{
        cout<<"You have entered wrong number...Please enter number between 1-3..."<<endl;
    }
    sleep(3);
    }
}