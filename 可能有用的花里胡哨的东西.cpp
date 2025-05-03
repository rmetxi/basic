/*
//wincon/winuser
#define MB_OK __MSABI_LONG(0x00000000)
#define MB_OKCANCEL __MSABI_LONG(0x00000001)
#define MB_ABORTRETRYIGNORE __MSABI_LONG(0x00000002)
#define MB_YESNOCANCEL __MSABI_LONG(0x00000003)
#define MB_YESNO __MSABI_LONG(0x00000004)
#define MB_RETRYCANCEL __MSABI_LONG(0x00000005)
#define MB_CANCELTRYCONTINUE __MSABI_LONG(0x00000006)
#define MB_ICONHAND __MSABI_LONG(0x00000010)
#define MB_ICONQUESTION __MSABI_LONG(0x00000020)
#define MB_ICONEXCLAMATION __MSABI_LONG(0x00000030)
#define MB_ICONASTERISK __MSABI_LONG(0x00000040)
#define MB_USERICON __MSABI_LONG(0x00000080)
#define MB_ICONWARNING MB_ICONEXCLAMATION
#define MB_ICONERROR MB_ICONHAND
#define MB_ICONINFORMATION MB_ICONASTERISK
#define MB_ICONSTOP MB_ICONHAND
#define MB_DEFBUTTON1 __MSABI_LONG(0x00000000)
#define MB_DEFBUTTON2 __MSABI_LONG(0x00000100)
#define MB_DEFBUTTON3 __MSABI_LONG(0x00000200)
#define MB_DEFBUTTON4 __MSABI_LONG(0x00000300)
#define MB_APPLMODAL __MSABI_LONG(0x00000000)
#define MB_SYSTEMMODAL __MSABI_LONG(0x00001000)
#define MB_TASKMODAL __MSABI_LONG(0x00002000)
#define MB_HELP __MSABI_LONG(0x00004000)
#define MB_NOFOCUS __MSABI_LONG(0x00008000)
#define MB_SETFOREGROUND __MSABI_LONG(0x00010000)
#define MB_DEFAULT_DESKTOP_ONLY __MSABI_LONG(0x00020000)
#define MB_TOPMOST __MSABI_LONG(0x00040000)
#define MB_RIGHT __MSABI_LONG(0x00080000)
#define MB_RTLREADING __MSABI_LONG(0x00100000)
#define MB_SERVICE_NOTIFICATION __MSABI_LONG(0x00200000)
#define MB_SERVICE_NOTIFICATION_NT3X __MSABI_LONG(0x00040000)
#define MB_TYPEMASK __MSABI_LONG(0x0000000F)
#define MB_ICONMASK __MSABI_LONG(0x000000F0)
#define MB_DEFMASK __MSABI_LONG(0x00000F00)
#define MB_MODEMASK __MSABI_LONG(0x00003000)
#define MB_MISCMASK __MSABI_LONG(0x0000C000)
*********************************

|VK_LBUTTON|01|1|鼠标左键|
|VK_RBUTTON|02|2|鼠标右键|
|VK_CANCEL|03|3|Ctrl-Break键|
|VK_MBUTTON|04|4|鼠标中键|
|VK_BACK|08|8|Backspace键|
|VK_TAB|09|9|Tab键|
|VK_CLEAR|0C|12|Clear键|
|VK_RETURN|0D|13|Enter键|
|VK_SHIFT|10|16|Shift键|
|VK_CONTROL|11|17|Ctrl键|
|VK_MENU|12|18|Alt键|
|VK_PAUSE|13|19|Pause键|
|VK_CAPITAL|14|20|Caps Lock键|
|VK_ESCAPE|1B|27|Esc键|
|VK_SPACE|20|32|Space键|
|VK_PRIOR|21|33|Page Up键|
|VK_NEXT|22|34|Page Down键|
|VK_END|23|35|End键|
|VK_HOME|24|36|Home键|
|VK_LEFT|25|37|←键|
|VK_UP|26|38|↑键|
|VK_RIGHT|27|39|→键|
|VK_DOWN|28|40|↓键|
|VK_SELECT|29|41|Select键|
|VK_PRINT|2A|42|Print键|
|VK_EXECUTE|2B|43|Execute键|
|VK_SNAPSHOT|2C|44|Print Screen键|
|VK_INSERT|2D|45|Ins键|
|VK_DELETE|2E|46|Del键|
|VK_HELP|2F|47|Help键|
|VK_0|30|48|0键|
|VK_1|31|49|1键|
|VK_2|32|50|2键|
|VK_3|33|51|3键|
|VK_4|34|52|4键|
|VK_5|35|53|5键|
|VK_6|36|54|6键|
|VK_7|37|55|7键|
|VK_8|38|56|8键|
|VK_9|39|57|9键|
|VK_A|41|65|A键|
|VK_B|42|66|B键|
|VK_C|43|67|C键|
|VK_D|44|68|D键|
|VK_E|45|69|E键|
|VK_F|46|70|F键|
|VK_G|47|71|G键|
|VK_H|48|72|H键|
|VK_I|49|73|I键|
|VK_J|4A|74|J键|
|VK_K|4B|75|K键|
|VK_L|4C|76|L键|
|VK_M|4D|77|M键|
|VK_N|4E|78|N键|
|VK_O|4F|79|O键|
|VK_P|50|80|P键|
|VK_Q|51|81|Q键|
|VK_R|52|82|R键|
|VK_S|53|83|S键|
|VK_T|54|84|T键|
|VK_U|55|85|U键|
|VK_V|56|86|V键|
|VK_W|57|87|W键|
|VK_X|58|88|X键|
|VK_Y|59|89|Y键|
|VK_Z|5A|90|Z键|
|VK_LWIN|5B|91|左Windows键|
|VK_RWIN|5C|92|右Windows键|
|VK_APPS|5D|93|应用程序键|
|VK_SLEEP|5F|95|休眠键|
|VK_NUMPAD0|60|96|小数字键盘0键|
|VK_NUMPAD1|61|97|小数字键盘1键|
|VK_NUMPAD2|62|98|小数字键盘2键|
|VK_NUMPAD3|63|99|小数字键盘3键|
|VK_NUMPAD4|64|100|小数字键盘4键|
|VK_NUMPAD5|65|101|小数字键盘5键|
|VK_NUMPAD6|66|102|小数字键盘6键|
|VK_NUMPAD7|67|103|小数字键盘7键|
|VK_NUMPAD8|68|104|小数字键盘8键|
|VK_NUMPAD9|69|105|小数字键盘9键|
|VK_MULTIPLY|6A|106|乘号键|
|VK_ADD|6B|107|加号键|
|VK_SEPARATOR|6C|108|分割键|
|VK_SUBSTRACT|6D|109|减号键|
|VK_DECIMAL|6E|110|小数点键|
|VK_DIVIDE|6F|111|除号键|
|VK_F1|70|112|F1键|
|VK_F2|71|113|F2键|
|VK_F3|72|114|F3键|
|VK_F4|73|115|F4键|
|VK_F5|74|116|F5键|
|VK_F6|75|117|F6键|
|VK_F7|76|118|F7键|
|VK_F8|77|119|F8键|
|VK_F9|78|120|F9键|
|VK_F10|79|121|F10键|
|VK_F11|7A|122|F11键|
|VK_F12|7B|123|F12键|
|VK_F13|7C|124|F13键|
|VK_F14|7D|125|F14键|
|VK_F15|7E|126|F15键|
|VK_F16|7F|127|F16键|
|VK_F17|80|128|F17键|
|VK_F18|81|129|F18键|
|VK_F19|82|130|F19键|
|VK_F20|83|131|F20键|
|VK_F21|84|132|F21键|
|VK_F22|85|133|F22键|
|VK_F23|86|134|F23键|
|VK_F24|87|135|F24键|
|VK_NUMLOCK|90|144|Num Lock键|
|VK_SCROLL|91|45|Scroll Lock键|
|VK_LSHIFT|A0|160|左Shift键|
|VK_RSHIFT|A1|161|右Shift键|
|VK_LCONTROL|A2|162|左Ctrl键|
|VK_RCONTROL|A3|163|右Ctrl键|
|VK_LMENU|A4|164|左Alt键|
|VK_RMENU|A5|165|右Alt键|


*/ 
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<iostream>
#include<stdint.h>
#define KEY_DOWN(VK_NONAME)((GetAsyncKeyState(VK_NONAME)&0x8000)? 1 : 0)
#include <thread>
namespace Colors{
	struct RGBcolor{
		uint8_t R,G,B;
	};
	void setcol8V(bool fl,bool fr,bool fg,bool fb,bool bl,bool br,bool bg,bool bb){
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),(fl?FOREGROUND_INTENSITY:0)|(fr?FOREGROUND_RED:0)|(fg?FOREGROUND_GREEN:0)|(fb?FOREGROUND_BLUE:0)|(bl?BACKGROUND_INTENSITY:0)|(br?BACKGROUND_RED:0)|(bg?BACKGROUND_GREEN:0)|(bb?BACKGROUND_BLUE:0));
	}
	void setcolwol(uint8_t i){
		setcol8V(i&0x8,i&0x1,i&0x2,i&0x4,i&0x80,i&0x10,i&0x20,i&0x40);
	}
	void rgb_init(){
	    HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	    DWORD dwInMode, dwOutMode;
	    GetConsoleMode(hIn, &dwInMode);	GetConsoleMode(hOut, &dwOutMode);
	    dwInMode |= 0x0200;	dwOutMode |= 0x0004;
	    SetConsoleMode(hIn, dwInMode);	SetConsoleMode(hOut, dwOutMode);
	}
	void rgb_set(uint8_t wr,uint8_t wg,uint8_t wb,uint8_t br,uint8_t bg,uint8_t bb){
	    printf("\033[38;2;%d;%d;%dm\033[48;2;%d;%d;%dm",wr,wg,wb,br,bg,bb);
	}
	void whilecoldiv(float qx){
		uint8_t r=255,g=0,b=0;
		for(g=0;g<=254;g++){
	    	rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    	printf(" ");
		}
	    rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    printf(" ");
		for(r=255;r>=1;r--){
	    	rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    	printf(" ");
		}
	    rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    printf(" ");
		for(b=0;b<=254;b++){
	    	rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    	printf(" ");
		}
	    rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    printf(" ");
		for(g=255;g>=1;g--){
	    	rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    	printf(" ");
		}
	    rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    printf(" ");
		for(r=0;r<=254;r++){
	    	rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    	printf(" ");
		}
	    rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    printf(" ");
		for(b=255;b>=1;b--){
			rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    	printf(" ");
		}
	    rgb_set(0,0,0,r/qx,g/qx,b/qx);
	    printf(" ");
	}

	void whilecolmin(uint8_t qx){
		uint8_t r=255,g=0,b=0;
		for(g=0;g<=254;g++){
	    	rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    	printf(" ");
		}
	    rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    printf(" ");
		for(r=255;r>=1;r--){
	    	rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    	printf(" ");
		}
	    rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    printf(" ");
		for(b=0;b<=254;b++){
	    	rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    	printf(" ");
		}
	    rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    printf(" ");
		for(g=255;g>=1;g--){
	    	rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    	printf(" ");
		}
	    rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    printf(" ");
		for(r=0;r<=254;r++){
	    	rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    	printf(" ");
		}
	    rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    printf(" ");
		for(b=255;b>=1;b--){
			rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    	printf(" ");
		}
	    rgb_set(0,0,0,std::max(r-qx,0),std::max(g-qx,0),std::max(b-qx,0));
	    printf(" ");
	}

}
namespace WindowControl{
	
	void gotoxy(int x,int y){ COORD c; c.X=x-1; c.Y=y-1; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c); }
	void Hide_cursor(){
	    CONSOLE_CURSOR_INFO cur={1,0};
	    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cur);
	}
	void setsizemid(int x,int y,int newWidth,int newHeight){
	    HWND hwnd = GetForegroundWindow();  
	    SetWindowPos(hwnd, NULL, x+newWidth/2, y+newHeight/2, newWidth, newHeight, SWP_NOZORDER);  
	    return;
	}
	void setsizelu(int x,int y,int newWidth,int newHeight){
	    HWND hwnd = GetForegroundWindow();  
	    SetWindowPos(hwnd, NULL, x, y, newWidth, newHeight, SWP_NOZORDER);  
	    return;
	}
	void sleep(long long ms){
		long long a=clock();
		while(clock()<ms+a);
	}
}
namespace board{
	void event(uint8_t Key,char Type){
		if(Type=='d'){
	    	keybd_event(Key,0,0,0);
		}
		if(Type=='u'){
	    	keybd_event(Key,0,2,0);
		}
		if(Type=='p'){
	    	keybd_event(Key,0,0,0);
	    	keybd_event(Key,0,2,0);
		}
	}
}
namespace mouse{
	void leftevent(char Type){
		if(Type=='d'){
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0); 
		}
		if(Type=='u'){
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0); 
		}
		if(Type=='p'){
			mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0); 
		}
	}
	void rightevent(char Type){
		if(Type=='d'){
			mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0); 
		}
		if(Type=='u'){
			mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0); 
		}
		if(Type=='p'){
			mouse_event(MOUSEEVENTF_RIGHTDOWN|MOUSEEVENTF_RIGHTUP,0,0,0,0); 
		}
	}	
	void midevent(char Type){
		if(Type=='d'){
			mouse_event(MOUSEEVENTF_MIDDLEUP,0,0,0,0); 
		}
		if(Type=='u'){
			mouse_event(MOUSEEVENTF_MIDDLEDOWN,0,0,0,0); 
			}
		if(Type=='p'){
			mouse_event(MOUSEEVENTF_MIDDLEDOWN|MOUSEEVENTF_MIDDLEUP,0,0,0,0); 
		}
	}
	namespace move{
		void here(int x,int y){
			POINT pt;
			bool b=GetCursorPos(&pt);
			SetCursorPos(pt.x+x,pt.y+y); 
		}
		void at00(int x,int y){
			SetCursorPos(x,y); 
		}
	}
}


//std::thread T(/*函数名不带括号*/,/*所有参数按顺序用逗号隔开*/); 
//T.join();或T.detach();
////不调用其中一个别怪我没跟你说程序崩溃. 

int main(){
	Colors::rgb_init();
	int i=0;
	while(1){
		POINT pt;
		bool b=GetCursorPos(&pt);
		std::cout<<i<<'*'<<pt.x<<" "<<pt.y<<std::endl;
		WindowControl::sleep(100);
		++i;
	}
}
