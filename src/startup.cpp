//
// Copyright 2020 Electronic Arts Inc.
//
// TiberianDawn.DLL and RedAlert.dll and corresponding source code is free 
// software: you can redistribute it and/or modify it under the terms of 
// the GNU General Public License as published by the Free Software Foundation, 
// either version 3 of the License, or (at your option) any later version.

// TiberianDawn.DLL and RedAlert.dll and corresponding source code is distributed 
// in the hope that it will be useful, but with permitted additional restrictions 
// under Section 7 of the GPL. See the GNU General Public License in LICENSE.TXT 
// distributed with this program. You should have received a copy of the 
// GNU General Public License along with permitted additional restrictions 
// with this program. If not, see https://github.com/electronicarts/CnC_Remastered_Collection

/* $Header:   F:\projects\c&c\vcs\code\startup.cpv   2.17   16 Oct 1995 16:48:12   JOE_BOSTIC  $ */
/***********************************************************************************************
 ***             C O N F I D E N T I A L  ---  W E S T W O O D   S T U D I O S               ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : Command & Conquer                                            *
 *                                                                                             *
 *                    File Name : STARTUP.CPP                                                  *
 *                                                                                             *
 *                   Programmer : Joe L. Bostic                                                *
 *                                                                                             *
 *                   Start Date : October 3, 1994                                              *
 *                                                                                             *
 *                  Last Update : August 27, 1995 [JLB]                                        *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *   Delete_Swap_Files -- Deletes previously existing swap files.                              *
 *   Prog_End -- Cleans up library systems in prep for game exit.                              *
 *   main -- Initial startup routine (preps library systems).                                  *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include "utils.hpp"

// TEMPORARY definition for CCDebugString() while most of the code have not been
// ported yet.
void CCDebugString (const char *string);

// bool Read_Private_Config_Struct(char *profile, NewConfigType *config);
// void Delete_Swap_Files(void);
// void Print_Error_End_Exit(char *string);
// void Print_Error_Exit(char *string);
// WinTimerClass *WinTimer;
// extern void Create_Main_Window ( HANDLE instance , int command_show , int width , int height);

// extern bool ReadyToQuit;
// void Read_Setup_Options(RawFileClass *config_file);

// bool VideoBackBufferAllowed = true;
// void Check_From_WChat(char *wchat_name);
// bool SpawnedFromWChat = false;
// bool ProgEndCalled = false;


// extern "C"{
// 	bool __cdecl Detect_MMX_Availability(void);
// 	void __cdecl Init_MMX(void);
// }

/***********************************************************************************************
 * main -- Initial startup routine (preps library systems).                                    *
 *                                                                                             *
 *    This is the routine that is first called when the program starts up. It basically        *
 *    handles the command line parsing and setting up library systems.                         *
 *                                                                                             *
 * INPUT:   argc  -- Number of command line arguments.                                         *
 *                                                                                             *
 *          argv  -- Pointer to array of comman line argument strings.                         *
 *                                                                                             *
 * OUTPUT:  Returns with execution failure code (if any).                                      *
 *                                                                                             *
 * WARNINGS:   none                                                                            *
 *                                                                                             *
 * HISTORY:                                                                                    *
 *   03/20/1995 JLB : Created.                                                                 *
 *=============================================================================================*/

// HINSTANCE	ProgramInstance;
// extern BOOL CC95AlreadyRunning;
// void Move_Point(short &x, short &y, register DirType dir, unsigned short distance);

// void Check_Use_Compressed_Shapes (void);
// extern void DLL_Shutdown(void);


// BOOL WINAPI DllMain(HINSTANCE instance, unsigned int fdwReason, void *lpvReserved)
// {
// 	lpvReserved;

// 	switch (fdwReason) {
		
// 		case DLL_PROCESS_ATTACH:
// 			ProgramInstance = instance;
// 			break;

// 		case DLL_PROCESS_DETACH:
// 			if (WindowsTimer) {
// 				delete WindowsTimer;
// 				WindowsTimer = NULL;
// 			}
// 			DLL_Shutdown();

// 			MixFileClass::Free_All();

// 			Uninit_Game();

// 			break;
			
// 		case DLL_THREAD_ATTACH:
// 		case DLL_THREAD_DETACH:
// 			break;
// 	}

	

// 	return true;
// }

int main(int argc, char* argv[])
{
	// int command_show = SW_HIDE;
	// HINSTANCE instance = ProgramInstance;
	// char command_line[1024];
	// strcpy(command_line, command_line_in);
	CCDebugString ("C&C95 - Starting up.\n");
	STUBBED("Use a logger.");

	/*
	** If we are already running then switch to the existing process and exit
	*/
	//SpawnedFromWChat = false;
	STUBBED("Set SpawnedFromWhat to false.");

	// if (CC95AlreadyRunning) {	//Set in the DDEServer constructor
	// 	//MessageBox (NULL, "Error - attempt to restart C&C95 when already running.", "Command & Conquer", MB_ICONEXCLAMATION|MB_OK);

	// 	HWND ccwindow;
    // 	ccwindow = FindWindow ("Command & Conquer", "Command & Conquer");
    // 	if (ccwindow){
    // 		SetForegroundWindow ( ccwindow );
    // 		ShowWindow ( ccwindow, SW_RESTORE );
    // 	}

	// 	return (EXIT_SUCCESS);
	// }
	STUBBED("Switch to existing CnC process when we are already running.");

	// ProgramInstance = instance;

	/*
	** Get the full path to the .EXE
	*/
	// GetModuleFileName (instance, &path_to_exe[0], 280);

	/*
	** First argument is supposed to be a pointer to the .EXE that is running
	**
	*/
	// argc=1;							//Set argument count to 1
	// argv[0]=&path_to_exe[0];	//Set 1st command line argument to point to full path
	STUBBED("Set the command-line argument to the execuable's full path.");

#ifdef JAPANESE
	ForceEnglish = false;
#endif
	if (true /* Parse_Command_Line(argc, argv) */) {
		STUBBED("Parse the command-line arguments.");

		// WindowsTimer = new WinTimerClass(60,FALSE);
		STUBBED("Initialize a timer.");

		// RawFileClass cfile("CONQUER.INI");
		STUBBED("Load the CONQUER.INI file.");

		/*
		** If there is loads of memory then use uncompressed shapes
		*/
		// Check_Use_Compressed_Shapes();
		STUBBED("Check if we're going to use compressed shapes or not.");

		// This is to cover potential edge cases.
  		STUBBED("Check if we have enough disk space for save files.");

		if (true /* cfile.Is_Available() */) {
			STUBBED("Make RawFileClass::Is_Available() cross-platform.");

// #ifndef NOMEMCHECK
// 			char * cdata = (char *)Load_Alloc_Data(cfile);
// 			Read_Private_Config_Struct(cdata, &NewConfig);
// 			delete [] cdata;
// #else
// 			Read_Private_Config_Struct((char *)Load_Alloc_Data(cfile), &NewConfig);
// #endif
			STUBBED("Read config data from CONQUER.INI.");

			// Read_Setup_Options( &cfile );
			STUBBED("Read setup data from CONQUER.INI.");

			CCDebugString("C&C95 - Creating main window.\n");

			// Create_Main_Window( instance , command_show , ScreenWidth , ScreenHeight );
			STUBBED("Create a window.");

			CCDebugString("C&C95 - Initialising audio.\n");

			// SoundOn = Audio_Init ( MainWindow , 16 , false , 11025*2 , 0 );
			STUBBED("Initialize audio subsystem.");

			// Palette = new(MEM_CLEAR) unsigned char[768];

			// BOOL video_success = FALSE;
			CCDebugString("C&C95 - Setting video mode.\n");
			// /*
			// ** Set 640x400 video mode. If its not available then try for 640x480
			// */
			// if (ScreenHeight == 400){
			// 	if (Set_Video_Mode (MainWindow, ScreenWidth, ScreenHeight, 8)){
			// 		video_success = TRUE;
			// 	}else{
			// 		if (Set_Video_Mode (MainWindow, ScreenWidth, 480, 8)){
			// 			video_success = TRUE;
			// 			ScreenHeight = 480;
			// 		}
			// 	}
			// }else{
			// 	if (Set_Video_Mode (MainWindow, ScreenWidth, ScreenHeight, 8)){
			// 		video_success = TRUE;
			// 	}
			// }

			// if (!video_success){
			// 	CCDebugString ("C&C95 - Failed to set video mode.\n");
			// 	MessageBox(MainWindow, Text_String(TXT_UNABLE_TO_SET_VIDEO_MODE), "Command & Conquer", MB_ICONEXCLAMATION|MB_OK);
			// 	if (WindowsTimer) delete WindowsTimer;
			// 	if (Palette) delete [] Palette;
			// 	return (EXIT_FAILURE);
			// }
			STUBBED("Set-up video subsystem.");

			CCDebugString("C&C95 - Initialising video surfaces.\n");

			// if (ScreenWidth==320){
			// 	VisiblePage.Init( ScreenWidth , ScreenHeight , NULL , 0 , (GBC_Enum)0);
			// 	ModeXBuff.Init( ScreenWidth , ScreenHeight , NULL , 0 , (GBC_Enum)(GBC_VISIBLE | GBC_VIDEOMEM));
			// } else {
			// 	VisiblePage.Init( ScreenWidth , ScreenHeight , NULL , 0 , (GBC_Enum)0);
			// 	HiddenPage.Init (ScreenWidth , ScreenHeight , NULL , 0 , (GBC_Enum)0);
			// }
			// ScreenHeight = 1536;

			// if (VisiblePage.Get_Height() == 480){
			// 	SeenBuff.Attach(&VisiblePage,0, 40, 1536, 1536);
			// 	HidPage.Attach(&HiddenPage, 0, 40, 1536, 1536);
			// }else{
			// 	SeenBuff.Attach(&VisiblePage,0, 0, 1536, 1536);
			// 	HidPage.Attach(&HiddenPage, 0, 0, 1536, 1536);
			// }
			STUBBED("Initialize video surfaces.");

			CCDebugString("C&C95 - Adjusting variables for resolution.\n");
			// Options.Adjust_Variables_For_Resolution();
			STUBBED("Adjust variables for resolution.");

			CCDebugString("C&C95 - Setting palette.\n");
			/////////Set_Palette(Palette);
			STUBBED("Set-up palette.");

			// WindowList[0][WINDOWWIDTH] 	= SeenBuff.Get_Width() >> 3;
			// WindowList[0][WINDOWHEIGHT]	= SeenBuff.Get_Height();
			STUBBED("Set values to window-related variables.");

			/*
			** Install the memory error handler
			*/
			//Memory_Error = &Memory_Error_Handler;
			STUBBED("Install memory error handler.");

			// We used to detect MMX availability here. But, most CPUs these
			// days already have MMX. So, no need to check for it. Besides,
			// we're using SDL 2 here, so no need to directly access MMX
			// functionality.

 			CCDebugString("C&C95 - Creating mouse class.\n");
// 			WWMouse = new WWMouseClass(&SeenBuff, 32, 32);
// //			MouseInstalled = Install_Mouse(32,24,320,200);
// 			MouseInstalled = TRUE;
			STUBBED("Create mouse class.");

			/*
			** See if we should run the intro
			*/
			CCDebugString ("C&C95 - Reading CONQUER.INI.\n");
			// char *buffer = (char*)Alloc(64000 , MEM_NORMAL);		//(char *)HidPage.Get_Buffer();
			// cfile.Read(buffer, cfile.Size());
			// buffer[cfile.Size()] = '\0';

			/*
			**	Check for forced intro movie run disabling. If the conquer
			**	configuration file says "no", then don't run the intro.
			*/
			// char tempbuff[5];
			// WWGetPrivateProfileString("Intro", "PlayIntro", "Yes", tempbuff, 4, buffer);
			// if ((stricmp(tempbuff, "No") == 0) || SpawnedFromWChat) {
			// 	Special.IsFromInstall = false;
			// }else{
			// 	Special.IsFromInstall = true;
			// }
			// SlowPalette = WWGetPrivateProfileInt("Options", "SlowPalette", 1, buffer);

			/*
			** Regardless of whether we should run it or not, here we're
			** gonna change it to say "no" in the future.
			*/
			// WWWritePrivateProfileString("Intro", "PlayIntro", "No", buffer);
			// cfile.Write(buffer, strlen(buffer));
			STUBBED("Disable running the intro in the future.");

			// Free(buffer);
			STUBBED("Check if we should run the intro.");

			// CCDebugString ("C&C95 - Checking availability of C&CSPAWN.INI packet from WChat.\n");
			// if (DDEServer.Get_MPlayer_Game_Info()){
			// 	CCDebugString ("C&C95 - C&CSPAWN.INI packet available.\n");
			// 	Check_From_WChat(NULL);
			// }else{
			// 	CCDebugString ("C&C95 - C&CSPAWN.INI packet not arrived yet.\n");
			// 	//Check_From_WChat("C&CSPAWN.INI");
			// 	//if (Special.IsFromWChat){
			// 	//	DDEServer.Disable();
			// 	//}
			// }
			STUBBED("Check if the C&CSPAWN.INI packet from WChat "
					"is available.");

			/*
			**	If the intro is being run for the first time, then don't
			**	allow breaking out of it with the <ESC> key.
			*/
			// if (Special.IsFromInstall) {
			// 	BreakoutAllowed = false;
			// }
			STUBBED("Prevent breaking out of the intro if it's run for the "
					"first time.");

			// Memory_Error_Exit = Print_Error_End_Exit;
			STUBBED("Set memory error exit function.");

			CCDebugString("C&C95 - Entering main game.\n");
			// Main_Game(argc, argv);
			STUBBED("Run main game.");

			// VisiblePage.Clear();
			// HiddenPage.Clear();
//			Set_Video_Mode(RESET_MODE);
			STUBBED("Clean up game pages.");

			// Memory_Error_Exit = Print_Error_Exit;
			STUBBED("Set memory error exit function.");

			CCDebugString("C&C95 - About to exit.\n");
			// ReadyToQuit = 1;

			// PostMessage(MainWindow, WM_DESTROY, 0, 0);
			// do
			// {
			// 	Keyboard::Check();
			// }while (ReadyToQuit == 1);

			// CCDebugString ("C&C95 - Returned from final message loop.\n");
			// //Prog_End();
			// //Invalidate_Cached_Icons();
			// //VisiblePage.Un_Init();
			// //HiddenPage.Un_Init();
			// //AllSurfaces.Release();
			// //Reset_Video_Mode();
			// //Stop_Profiler();
			STUBBED("Exiting game.");
			return (EXIT_SUCCESS);

		} else {
// #ifdef GERMAN
// 			puts("Bitte erst das SETUP-Programm starten.\n");
// #else
// #ifdef FRENCH
// 			puts("Lancez d'abord le programme de configuration SETUP.\n");
// #else
// 			puts("Run SETUP program first.");
// 			puts("\n");
// #endif
// 			Kbd.Get();
// #endif
			STUBBED("Tell player to run the SETUP program first.");
		}

//		Remove_Keyboard_Interrupt();
		// if (WindowsTimer){
		//  	delete WindowsTimer;
		//  	WindowsTimer = NULL;
		// }

		// if (Palette){
		// 	delete [] Palette;
		// 	Palette = NULL;
		// }
		STUBBED("Do some clean-up.");
	}

	return(EXIT_SUCCESS);
}


/***********************************************************************************************
 * Prog_End -- Cleans up library systems in prep for game exit.                                *
 *                                                                                             *
 *    This routine should be called before the game terminates. It handles cleaning up         *
 *    library systems so that a graceful return to the host operating system is achieved.      *
 *                                                                                             *
 * INPUT:   none                                                                               *
 *                                                                                             *
 * OUTPUT:  none                                                                               *
 *                                                                                             *
 * WARNINGS:   none                                                                            *
 *                                                                                             *
 * HISTORY:                                                                                    *
 *   03/20/1995 JLB : Created.                                                                 *
 *=============================================================================================*/
void __cdecl Prog_End(const char *why, bool fatal)  // Added why and fatal parameters. ST - 6/27/2019 10:10PM		
{
// 	GlyphX_Debug_Print("Prog_End()");
	
// 	if (why) {
// 		GlyphX_Debug_Print(why);
// 	}
// 	if (fatal) {
// 		*((int*)0) = 0;
// 	}
	
// #ifndef DEMO
// 	if (GameToPlay == GAME_MODEM || GameToPlay == GAME_NULL_MODEM) {
// //		NullModem.Change_IRQ_Priority(0);
// 	}
// #endif
// 	CCDebugString ("C&C95 - About to call Sound_End.\n");
// 	Sound_End();
// 	CCDebugString ("C&C95 - Returned from Sound_End.\n");
// 	if (WWMouse){
// 		CCDebugString ("C&C95 - Deleting mouse object.\n");
// 		delete WWMouse;
// 		WWMouse = NULL;
// 	}
// 	if (WindowsTimer){
// 		CCDebugString ("C&C95 - Deleting windows timer.\n");
// 		 delete WindowsTimer;
// 		 WindowsTimer = NULL;
// 	}

// 	if (Palette){
// 		CCDebugString ("C&C95 - Deleting palette object.\n");
// 		delete [] Palette;
// 		Palette = NULL;
// 	}

// 	ProgEndCalled = true;
	STUBBED("Clean up subsystems before game formally exits.");
}


/***********************************************************************************************
 * Delete_Swap_Files -- Deletes previously existing swap files.                                *
 *                                                                                             *
 *    This routine will scan through the current directory and delete any swap files it may    *
 *    find. This is used to clear out any left over swap files from previous runs (crashes)    *
 *    of the game. This routine presumes that it cannot delete the swap file that is created   *
 *    by the current run of the game.                                                          *
 *                                                                                             *
 * INPUT:   none                                                                               *
 *                                                                                             *
 * OUTPUT:  none                                                                               *
 *                                                                                             *
 * WARNINGS:   none                                                                            *
 *                                                                                             *
 * HISTORY:                                                                                    *
 *   08/27/1995 JLB : Created.                                                                 *
 *=============================================================================================*/
void Delete_Swap_Files(void)
{
	STUBBED("Remove Delete_Swap_Files() since we're not using it.");
}


void Print_Error_End_Exit(char *string)
{
	// printf( "%s\n", string );
	// Get_Key();
	// Prog_End();
	// printf( "%s\n", string );
	// if (!RunningAsDLL) {
	// 	exit(1);
	// }
	STUBBED("Print error message and cleanup mess when an "
			"error is encountered.");
}


void Print_Error_Exit(char *string)
{
	// printf( "%s\n", string );
	// if (!RunningAsDLL) {
	// 	exit(1);
	// }
	STUBBED("Print error.");
}

/***********************************************************************************************
 * Read_Setup_Options -- Read stuff in from the INI file that we need to know sooner           *
 *                                                                                             *
 *                                                                                             *
 *                                                                                             *
 * INPUT:    Nothing                                                                           *
 *                                                                                             *
 * OUTPUT:   Nothing                                                                           *
 *                                                                                             *
 * WARNINGS: None                                                                              *
 *                                                                                             *
 * HISTORY:                                                                                    *
 *    6/7/96 4:09PM ST : Created                                                               *
 *=============================================================================================*/
void Read_Setup_Options(/*  RawFileClass *config_file  */)
{
	// char *buffer = new char [config_file->Size()];

	// if (config_file->Is_Available()){

	// 	config_file->Read (buffer, config_file->Size());

	// 	VideoBackBufferAllowed = WWGetPrivateProfileInt ("Options", "VideoBackBuffer", 1, buffer);
	// 	AllowHardwareBlitFills = WWGetPrivateProfileInt ("Options", "HardwareFills", 1, buffer);
	// 	ScreenHeight = WWGetPrivateProfileInt ("Options", "Resolution", 0, buffer) ? 1536 : 1536;
	// 	IsV107 = WWGetPrivateProfileInt ("Options", "Compatibility", 0, buffer);

	// 	/*
	// 	** See if an alternative socket number has been specified
	// 	*/
	// 	int socket = WWGetPrivateProfileInt ("Options", "Socket", 0, buffer);
	// 	if (socket >0 ){
	// 		socket += 0x4000;
	// 		if (socket >= 0x4000 && socket < 0x8000) {
	// 			Ipx.Set_Socket (socket);
	// 		}
	// 	}

	// 	/*
	// 	** See if a destination network has been specified
	// 	*/
	// 	char netbuf [512];
	// 	memset (netbuf, 0, sizeof (netbuf) );
	// 	char *netptr = WWGetPrivateProfileString ("Options", "DestNet", NULL, netbuf, sizeof (netbuf), buffer);

	// 	if (netptr && strlen (netbuf)){
	// 		NetNumType net;
	// 		NetNodeType node;

	// 		/*
	// 		** Scan the string, pulling off each address piece
	// 		*/
	// 		int i = 0;
	// 		char * p = strtok(netbuf,".");
	// 		int x;
	// 		while (p) {
	// 			sscanf(p,"%x",&x);			// convert from hex string to int
	// 			if (i < 4) {
	// 				net[i] = (char)x;			// fill NetNum
	// 			} else {
	// 				node[i-4] = (char)x;		// fill NetNode
	// 			}
	// 			i++;
	// 			p = strtok(NULL,".");
	// 		}

	// 		/*
	// 		** If all the address components were successfully read, fill in the
	// 		** BridgeNet with a broadcast address to the network across the bridge.
	// 		*/
	// 		if (i >= 4) {
	// 			IsBridge = 1;
	// 			memset(node, 0xff, 6);
	// 			BridgeNet = IPXAddressClass(net, node);
	// 		}
	// 	}

	// }

	// delete [] buffer;
	STUBBED("Read values from a .INI file.");
}