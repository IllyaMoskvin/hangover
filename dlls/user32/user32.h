#ifndef USER32_H
#define USER32_H

#include <stdlib.h>

enum user32_calls
{
    CALL_ACTIVATEKEYBOARDLAYOUT = 0,
    CALL_ADDCLIPBOARDFORMATLISTENER,
    CALL_APPENDMENUA,
    CALL_APPENDMENUW,
    CALL_ATTACHTHREADINPUT,
    CALL_BLOCKINPUT,
    CALL_CALCCHILDSCROLL,
    CALL_CALLMSGFILTERA,
    CALL_CALLMSGFILTERW,
    CALL_CALLNEXTHOOKEX,
    CALL_CASCADECHILDWINDOWS,
    CALL_CASCADEWINDOWS,
    CALL_CHANGECLIPBOARDCHAIN,
    CALL_CHANGEMENUA,
    CALL_CHANGEMENUW,
    CALL_CHECKDLGBUTTON,
    CALL_CHECKMENUITEM,
    CALL_CHECKMENURADIOITEM,
    CALL_CHECKRADIOBUTTON,
    CALL_CLIPCURSOR,
    CALL_CLOSECLIPBOARD,
    CALL_COPYICON,
    CALL_COPYIMAGE,
    CALL_COUNTCLIPBOARDFORMATS,
    CALL_CREATECARET,
    CALL_CREATECURSOR,
    CALL_CREATEDIALOGINDIRECTPARAMA,
    CALL_CREATEDIALOGINDIRECTPARAMAORW,
    CALL_CREATEDIALOGINDIRECTPARAMW,
    CALL_CREATEDIALOGPARAMA,
    CALL_CREATEDIALOGPARAMW,
    CALL_CREATEICONINDIRECT,
    CALL_CREATEMDIWINDOWA,
    CALL_CREATEMDIWINDOWW,
    CALL_CREATEMENU,
    CALL_CREATEPOPUPMENU,
    CALL_DEFDLGPROCA,
    CALL_DEFDLGPROCW,
    CALL_DEFFRAMEPROCA,
    CALL_DEFFRAMEPROCW,
    CALL_DEFMDICHILDPROCA,
    CALL_DEFMDICHILDPROCW,
    CALL_DEFRAWINPUTPROC,
    CALL_DEFWINDOWPROCA,
    CALL_DEFWINDOWPROCW,
    CALL_DELETEMENU,
    CALL_DESTROYCARET,
    CALL_DESTROYCURSOR,
    CALL_DESTROYICON,
    CALL_DESTROYMENU,
    CALL_DIALOGBOXINDIRECTPARAMA,
    CALL_DIALOGBOXINDIRECTPARAMAORW,
    CALL_DIALOGBOXINDIRECTPARAMW,
    CALL_DIALOGBOXPARAMA,
    CALL_DIALOGBOXPARAMW,
    CALL_DLGDIRLISTA,
    CALL_DLGDIRLISTCOMBOBOXA,
    CALL_DLGDIRLISTCOMBOBOXW,
    CALL_DLGDIRLISTW,
    CALL_DLGDIRSELECTCOMBOBOXEXA,
    CALL_DLGDIRSELECTCOMBOBOXEXW,
    CALL_DLGDIRSELECTEXA,
    CALL_DLGDIRSELECTEXW,
    CALL_DRAWICON,
    CALL_DRAWICONEX,
    CALL_DRAWMENUBAR,
    CALL_DRAWMENUBARTEMP,
    CALL_EMPTYCLIPBOARD,
    CALL_ENABLEMENUITEM,
    CALL_ENDDIALOG,
    CALL_ENDMENU,
    CALL_ENUMCLIPBOARDFORMATS,
    CALL_GETACTIVEWINDOW,
    CALL_GETASYNCKEYSTATE,
    CALL_GETCAPTURE,
    CALL_GETCARETBLINKTIME,
    CALL_GETCARETPOS,
    CALL_GETCLASSINFOA,
    CALL_GETCLASSINFOEXA,
    CALL_GETCLASSINFOEXW,
    CALL_GETCLASSINFOW,
    CALL_GETCLASSLONGA,
    CALL_GETCLASSLONGPTRA,
    CALL_GETCLASSLONGPTRW,
    CALL_GETCLASSLONGW,
    CALL_GETCLASSNAMEA,
    CALL_GETCLASSNAMEW,
    CALL_GETCLASSWORD,
    CALL_GETCLIPBOARDDATA,
    CALL_GETCLIPBOARDFORMATNAMEA,
    CALL_GETCLIPBOARDFORMATNAMEW,
    CALL_GETCLIPBOARDOWNER,
    CALL_GETCLIPBOARDSEQUENCENUMBER,
    CALL_GETCLIPBOARDVIEWER,
    CALL_GETCLIPCURSOR,
    CALL_GETCOMBOBOXINFO,
    CALL_GETCURSOR,
    CALL_GETCURSORFRAMEINFO,
    CALL_GETCURSORINFO,
    CALL_GETCURSORPOS,
    CALL_GETDLGCTRLID,
    CALL_GETDLGITEM,
    CALL_GETDLGITEMINT,
    CALL_GETDLGITEMTEXTA,
    CALL_GETDLGITEMTEXTW,
    CALL_GETFOCUS,
    CALL_GETFOREGROUNDWINDOW,
    CALL_GETICONINFO,
    CALL_GETINPUTSTATE,
    CALL_GETKBCODEPAGE,
    CALL_GETKEYBOARDLAYOUT,
    CALL_GETKEYBOARDLAYOUTNAMEA,
    CALL_GETKEYBOARDLAYOUTNAMEW,
    CALL_GETKEYBOARDSTATE,
    CALL_GETKEYBOARDTYPE,
    CALL_GETKEYNAMETEXTA,
    CALL_GETKEYNAMETEXTW,
    CALL_GETKEYSTATE,
    CALL_GETLASTINPUTINFO,
    CALL_GETLISTBOXINFO,
    CALL_GETMENU,
    CALL_GETMENUBARINFO,
    CALL_GETMENUCONTEXTHELPID,
    CALL_GETMENUDEFAULTITEM,
    CALL_GETMENUINFO,
    CALL_GETMENUITEMCOUNT,
    CALL_GETMENUITEMID,
    CALL_GETMENUITEMINFOA,
    CALL_GETMENUITEMINFOW,
    CALL_GETMENUITEMRECT,
    CALL_GETMENUSTATE,
    CALL_GETMENUSTRINGA,
    CALL_GETMENUSTRINGW,
    CALL_GETNEXTDLGGROUPITEM,
    CALL_GETNEXTDLGTABITEM,
    CALL_GETOPENCLIPBOARDWINDOW,
    CALL_GETPHYSICALCURSORPOS,
    CALL_GETPRIORITYCLIPBOARDFORMAT,
    CALL_GETPROGMANWINDOW,
    CALL_GETQUEUESTATUS,
    CALL_GETRAWINPUTBUFFER,
    CALL_GETRAWINPUTDATA,
    CALL_GETRAWINPUTDEVICEINFOA,
    CALL_GETRAWINPUTDEVICEINFOW,
    CALL_GETRAWINPUTDEVICELIST,
    CALL_GETREGISTEREDRAWINPUTDEVICES,
    CALL_GETSHELLWINDOW,
    CALL_GETSUBMENU,
    CALL_GETSYSTEMMENU,
    CALL_GETTASKMANWINDOW,
    CALL_GETUPDATEDCLIPBOARDFORMATS,
    CALL_HIDECARET,
    CALL_HILITEMENUITEM,
    CALL_INSERTMENUA,
    CALL_INSERTMENUITEMA,
    CALL_INSERTMENUITEMW,
    CALL_INSERTMENUW,
    CALL_ISCLIPBOARDFORMATAVAILABLE,
    CALL_ISDIALOGMESSAGEW,
    CALL_ISDLGBUTTONCHECKED,
    CALL_ISMENU,
    CALL_ISWINEVENTHOOKINSTALLED,
    CALL_KEYBD_EVENT,
    CALL_LOADBITMAPA,
    CALL_LOADBITMAPW,
    CALL_LOADCURSORA,
    CALL_LOADCURSORFROMFILEA,
    CALL_LOADCURSORFROMFILEW,
    CALL_LOADCURSORW,
    CALL_LOADICONA,
    CALL_LOADICONW,
    CALL_LOADIMAGEA,
    CALL_LOADIMAGEW,
    CALL_LOADKEYBOARDLAYOUTA,
    CALL_LOADKEYBOARDLAYOUTW,
    CALL_LOADMENUA,
    CALL_LOADMENUINDIRECTA,
    CALL_LOADMENUINDIRECTW,
    CALL_LOADMENUW,
    CALL_LOOKUPICONIDFROMDIRECTORY,
    CALL_LOOKUPICONIDFROMDIRECTORYEX,
    CALL_MAPDIALOGRECT,
    CALL_MAPVIRTUALKEYA,
    CALL_MAPVIRTUALKEYEXA,
    CALL_MAPVIRTUALKEYEXW,
    CALL_MAPVIRTUALKEYW,
    CALL_MODIFYMENUA,
    CALL_MODIFYMENUW,
    CALL_MOUSE_EVENT,
    CALL_NOTIFYWINEVENT,
    CALL_OEMKEYSCAN,
    CALL_OEMTOCHARA,
    CALL_OPENCLIPBOARD,
    CALL_PAINTDESKTOP,
    CALL_PRIVATEEXTRACTICONEXA,
    CALL_PRIVATEEXTRACTICONEXW,
    CALL_PRIVATEEXTRACTICONSA,
    CALL_PRIVATEEXTRACTICONSW,
    CALL_REALGETWINDOWCLASSA,
    CALL_REALGETWINDOWCLASSW,
    CALL_REGISTERCLASSA,
    CALL_REGISTERCLASSEXA,
    CALL_REGISTERCLASSEXW,
    CALL_REGISTERCLASSW,
    CALL_REGISTERCLIPBOARDFORMATA,
    CALL_REGISTERCLIPBOARDFORMATW,
    CALL_REGISTERHOTKEY,
    CALL_RELEASECAPTURE,
    CALL_REMOVECLIPBOARDFORMATLISTENER,
    CALL_REMOVEMENU,
    CALL_SCROLLCHILDREN,
    CALL_SENDDLGITEMMESSAGEA,
    CALL_SENDDLGITEMMESSAGEW,
    CALL_SENDINPUT,
    CALL_SETACTIVEWINDOW,
    CALL_SETCAPTURE,
    CALL_SETCARETBLINKTIME,
    CALL_SETCARETPOS,
    CALL_SETCLASSLONGA,
    CALL_SETCLASSLONGPTRA,
    CALL_SETCLASSLONGPTRW,
    CALL_SETCLASSLONGW,
    CALL_SETCLASSWORD,
    CALL_SETCLIPBOARDDATA,
    CALL_SETCLIPBOARDVIEWER,
    CALL_SETCURSOR,
    CALL_SETCURSORPOS,
    CALL_SETDESKWALLPAPER,
    CALL_SETDLGITEMINT,
    CALL_SETDLGITEMTEXTA,
    CALL_SETDLGITEMTEXTW,
    CALL_SETFOCUS,
    CALL_SETFOREGROUNDWINDOW,
    CALL_SETKEYBOARDSTATE,
    CALL_SETMENU,
    CALL_SETMENUCONTEXTHELPID,
    CALL_SETMENUDEFAULTITEM,
    CALL_SETMENUINFO,
    CALL_SETMENUITEMBITMAPS,
    CALL_SETMENUITEMINFOA,
    CALL_SETMENUITEMINFOW,
    CALL_SETPHYSICALCURSORPOS,
    CALL_SETPROGMANWINDOW,
    CALL_SETSHELLWINDOW,
    CALL_SETSHELLWINDOWEX,
    CALL_SETSYSTEMCURSOR,
    CALL_SETSYSTEMMENU,
    CALL_SETTASKMANWINDOW,
    CALL_SETWINDOWSHOOKA,
    CALL_SETWINDOWSHOOKEXA,
    CALL_SETWINDOWSHOOKEXW,
    CALL_SETWINDOWSHOOKW,
    CALL_SETWINEVENTHOOK,
    CALL_SHOWCARET,
    CALL_SHOWCURSOR,
    CALL_TILECHILDWINDOWS,
    CALL_TILEWINDOWS,
    CALL_TOASCII,
    CALL_TOASCIIEX,
    CALL_TOUNICODE,
    CALL_TOUNICODEEX,
    CALL_TRACKMOUSEEVENT,
    CALL_TRACKPOPUPMENU,
    CALL_TRACKPOPUPMENUEX,
    CALL_TRANSLATEACCELERATORA,
    CALL_TRANSLATEACCELERATORW,
    CALL_TRANSLATEMDISYSACCEL,
    CALL_UNHOOKWINDOWSHOOK,
    CALL_UNHOOKWINDOWSHOOKEX,
    CALL_UNHOOKWINEVENT,
    CALL_UNLOADKEYBOARDLAYOUT,
    CALL_UNREGISTERCLASSA,
    CALL_UNREGISTERCLASSW,
    CALL_UNREGISTERHOTKEY,
    CALL_VKKEYSCANA,
    CALL_VKKEYSCANW,
};

#ifndef QEMU_DLL_GUEST

extern const struct qemu_ops *qemu_ops;

void qemu_ActivateKeyboardLayout(struct qemu_syscall *call);
void qemu_AddClipboardFormatListener(struct qemu_syscall *call);
void qemu_AppendMenuA(struct qemu_syscall *call);
void qemu_AppendMenuW(struct qemu_syscall *call);
void qemu_AttachThreadInput(struct qemu_syscall *call);
void qemu_BlockInput(struct qemu_syscall *call);
void qemu_CalcChildScroll(struct qemu_syscall *call);
void qemu_CallMsgFilterA(struct qemu_syscall *call);
void qemu_CallMsgFilterW(struct qemu_syscall *call);
void qemu_CallNextHookEx(struct qemu_syscall *call);
void qemu_CascadeChildWindows(struct qemu_syscall *call);
void qemu_CascadeWindows(struct qemu_syscall *call);
void qemu_ChangeClipboardChain(struct qemu_syscall *call);
void qemu_ChangeMenuA(struct qemu_syscall *call);
void qemu_ChangeMenuW(struct qemu_syscall *call);
void qemu_CheckDlgButton(struct qemu_syscall *call);
void qemu_CheckMenuItem(struct qemu_syscall *call);
void qemu_CheckMenuRadioItem(struct qemu_syscall *call);
void qemu_CheckRadioButton(struct qemu_syscall *call);
void qemu_ClipCursor(struct qemu_syscall *call);
void qemu_CloseClipboard(struct qemu_syscall *call);
void qemu_CopyIcon(struct qemu_syscall *call);
void qemu_CopyImage(struct qemu_syscall *call);
void qemu_CountClipboardFormats(struct qemu_syscall *call);
void qemu_CreateCaret(struct qemu_syscall *call);
void qemu_CreateCursor(struct qemu_syscall *call);
void qemu_CreateDialogIndirectParamA(struct qemu_syscall *call);
void qemu_CreateDialogIndirectParamAorW(struct qemu_syscall *call);
void qemu_CreateDialogIndirectParamW(struct qemu_syscall *call);
void qemu_CreateDialogParamA(struct qemu_syscall *call);
void qemu_CreateDialogParamW(struct qemu_syscall *call);
void qemu_CreateIconIndirect(struct qemu_syscall *call);
void qemu_CreateMDIWindowA(struct qemu_syscall *call);
void qemu_CreateMDIWindowW(struct qemu_syscall *call);
void qemu_CreateMenu(struct qemu_syscall *call);
void qemu_CreatePopupMenu(struct qemu_syscall *call);
void qemu_DefDlgProcA(struct qemu_syscall *call);
void qemu_DefDlgProcW(struct qemu_syscall *call);
void qemu_DefFrameProcA(struct qemu_syscall *call);
void qemu_DefFrameProcW(struct qemu_syscall *call);
void qemu_DefMDIChildProcA(struct qemu_syscall *call);
void qemu_DefMDIChildProcW(struct qemu_syscall *call);
void qemu_DefRawInputProc(struct qemu_syscall *call);
void qemu_DefWindowProcA(struct qemu_syscall *call);
void qemu_DefWindowProcW(struct qemu_syscall *call);
void qemu_DeleteMenu(struct qemu_syscall *call);
void qemu_DestroyCaret(struct qemu_syscall *call);
void qemu_DestroyCursor(struct qemu_syscall *call);
void qemu_DestroyIcon(struct qemu_syscall *call);
void qemu_DestroyMenu(struct qemu_syscall *call);
void qemu_DialogBoxIndirectParamA(struct qemu_syscall *call);
void qemu_DialogBoxIndirectParamAorW(struct qemu_syscall *call);
void qemu_DialogBoxIndirectParamW(struct qemu_syscall *call);
void qemu_DialogBoxParamA(struct qemu_syscall *call);
void qemu_DialogBoxParamW(struct qemu_syscall *call);
void qemu_DlgDirListA(struct qemu_syscall *call);
void qemu_DlgDirListComboBoxA(struct qemu_syscall *call);
void qemu_DlgDirListComboBoxW(struct qemu_syscall *call);
void qemu_DlgDirListW(struct qemu_syscall *call);
void qemu_DlgDirSelectComboBoxExA(struct qemu_syscall *call);
void qemu_DlgDirSelectComboBoxExW(struct qemu_syscall *call);
void qemu_DlgDirSelectExA(struct qemu_syscall *call);
void qemu_DlgDirSelectExW(struct qemu_syscall *call);
void qemu_DrawIcon(struct qemu_syscall *call);
void qemu_DrawIconEx(struct qemu_syscall *call);
void qemu_DrawMenuBar(struct qemu_syscall *call);
void qemu_DrawMenuBarTemp(struct qemu_syscall *call);
void qemu_EmptyClipboard(struct qemu_syscall *call);
void qemu_EnableMenuItem(struct qemu_syscall *call);
void qemu_EndDialog(struct qemu_syscall *call);
void qemu_EndMenu(struct qemu_syscall *call);
void qemu_EnumClipboardFormats(struct qemu_syscall *call);
void qemu_GetActiveWindow(struct qemu_syscall *call);
void qemu_GetAsyncKeyState(struct qemu_syscall *call);
void qemu_GetCapture(struct qemu_syscall *call);
void qemu_GetCaretBlinkTime(struct qemu_syscall *call);
void qemu_GetCaretPos(struct qemu_syscall *call);
void qemu_GetClassInfoA(struct qemu_syscall *call);
void qemu_GetClassInfoExA(struct qemu_syscall *call);
void qemu_GetClassInfoExW(struct qemu_syscall *call);
void qemu_GetClassInfoW(struct qemu_syscall *call);
void qemu_GetClassLongA(struct qemu_syscall *call);
void qemu_GetClassLongPtrA(struct qemu_syscall *call);
void qemu_GetClassLongPtrW(struct qemu_syscall *call);
void qemu_GetClassLongW(struct qemu_syscall *call);
void qemu_GetClassNameA(struct qemu_syscall *call);
void qemu_GetClassNameW(struct qemu_syscall *call);
void qemu_GetClassWord(struct qemu_syscall *call);
void qemu_GetClipboardData(struct qemu_syscall *call);
void qemu_GetClipboardFormatNameA(struct qemu_syscall *call);
void qemu_GetClipboardFormatNameW(struct qemu_syscall *call);
void qemu_GetClipboardOwner(struct qemu_syscall *call);
void qemu_GetClipboardSequenceNumber(struct qemu_syscall *call);
void qemu_GetClipboardViewer(struct qemu_syscall *call);
void qemu_GetClipCursor(struct qemu_syscall *call);
void qemu_GetComboBoxInfo(struct qemu_syscall *call);
void qemu_GetCursor(struct qemu_syscall *call);
void qemu_GetCursorFrameInfo(struct qemu_syscall *call);
void qemu_GetCursorInfo(struct qemu_syscall *call);
void qemu_GetCursorPos(struct qemu_syscall *call);
void qemu_GetDlgCtrlID(struct qemu_syscall *call);
void qemu_GetDlgItem(struct qemu_syscall *call);
void qemu_GetDlgItemInt(struct qemu_syscall *call);
void qemu_GetDlgItemTextA(struct qemu_syscall *call);
void qemu_GetDlgItemTextW(struct qemu_syscall *call);
void qemu_GetFocus(struct qemu_syscall *call);
void qemu_GetForegroundWindow(struct qemu_syscall *call);
void qemu_GetIconInfo(struct qemu_syscall *call);
void qemu_GetInputState(struct qemu_syscall *call);
void qemu_GetKBCodePage(struct qemu_syscall *call);
void qemu_GetKeyboardLayout(struct qemu_syscall *call);
void qemu_GetKeyboardLayoutNameA(struct qemu_syscall *call);
void qemu_GetKeyboardLayoutNameW(struct qemu_syscall *call);
void qemu_GetKeyboardState(struct qemu_syscall *call);
void qemu_GetKeyboardType(struct qemu_syscall *call);
void qemu_GetKeyNameTextA(struct qemu_syscall *call);
void qemu_GetKeyNameTextW(struct qemu_syscall *call);
void qemu_GetKeyState(struct qemu_syscall *call);
void qemu_GetLastInputInfo(struct qemu_syscall *call);
void qemu_GetListBoxInfo(struct qemu_syscall *call);
void qemu_GetMenu(struct qemu_syscall *call);
void qemu_GetMenuBarInfo(struct qemu_syscall *call);
void qemu_GetMenuContextHelpId(struct qemu_syscall *call);
void qemu_GetMenuDefaultItem(struct qemu_syscall *call);
void qemu_GetMenuInfo(struct qemu_syscall *call);
void qemu_GetMenuItemCount(struct qemu_syscall *call);
void qemu_GetMenuItemID(struct qemu_syscall *call);
void qemu_GetMenuItemInfoA(struct qemu_syscall *call);
void qemu_GetMenuItemInfoW(struct qemu_syscall *call);
void qemu_GetMenuItemRect(struct qemu_syscall *call);
void qemu_GetMenuState(struct qemu_syscall *call);
void qemu_GetMenuStringA(struct qemu_syscall *call);
void qemu_GetMenuStringW(struct qemu_syscall *call);
void qemu_GetNextDlgGroupItem(struct qemu_syscall *call);
void qemu_GetNextDlgTabItem(struct qemu_syscall *call);
void qemu_GetOpenClipboardWindow(struct qemu_syscall *call);
void qemu_GetPhysicalCursorPos(struct qemu_syscall *call);
void qemu_GetPriorityClipboardFormat(struct qemu_syscall *call);
void qemu_GetProgmanWindow(struct qemu_syscall *call);
void qemu_GetQueueStatus(struct qemu_syscall *call);
void qemu_GetRawInputBuffer(struct qemu_syscall *call);
void qemu_GetRawInputData(struct qemu_syscall *call);
void qemu_GetRawInputDeviceInfoA(struct qemu_syscall *call);
void qemu_GetRawInputDeviceInfoW(struct qemu_syscall *call);
void qemu_GetRawInputDeviceList(struct qemu_syscall *call);
void qemu_GetRegisteredRawInputDevices(struct qemu_syscall *call);
void qemu_GetShellWindow(struct qemu_syscall *call);
void qemu_GetSubMenu(struct qemu_syscall *call);
void qemu_GetSystemMenu(struct qemu_syscall *call);
void qemu_GetTaskmanWindow(struct qemu_syscall *call);
void qemu_GetUpdatedClipboardFormats(struct qemu_syscall *call);
void qemu_HideCaret(struct qemu_syscall *call);
void qemu_HiliteMenuItem(struct qemu_syscall *call);
void qemu_InsertMenuA(struct qemu_syscall *call);
void qemu_InsertMenuItemA(struct qemu_syscall *call);
void qemu_InsertMenuItemW(struct qemu_syscall *call);
void qemu_InsertMenuW(struct qemu_syscall *call);
void qemu_IsClipboardFormatAvailable(struct qemu_syscall *call);
void qemu_IsDialogMessageW(struct qemu_syscall *call);
void qemu_IsDlgButtonChecked(struct qemu_syscall *call);
void qemu_IsMenu(struct qemu_syscall *call);
void qemu_IsWinEventHookInstalled(struct qemu_syscall *call);
void qemu_keybd_event(struct qemu_syscall *call);
void qemu_LoadBitmapA(struct qemu_syscall *call);
void qemu_LoadBitmapW(struct qemu_syscall *call);
void qemu_LoadCursorA(struct qemu_syscall *call);
void qemu_LoadCursorFromFileA(struct qemu_syscall *call);
void qemu_LoadCursorFromFileW(struct qemu_syscall *call);
void qemu_LoadCursorW(struct qemu_syscall *call);
void qemu_LoadIconA(struct qemu_syscall *call);
void qemu_LoadIconW(struct qemu_syscall *call);
void qemu_LoadImageA(struct qemu_syscall *call);
void qemu_LoadImageW(struct qemu_syscall *call);
void qemu_LoadKeyboardLayoutA(struct qemu_syscall *call);
void qemu_LoadKeyboardLayoutW(struct qemu_syscall *call);
void qemu_LoadMenuA(struct qemu_syscall *call);
void qemu_LoadMenuIndirectA(struct qemu_syscall *call);
void qemu_LoadMenuIndirectW(struct qemu_syscall *call);
void qemu_LoadMenuW(struct qemu_syscall *call);
void qemu_LookupIconIdFromDirectory(struct qemu_syscall *call);
void qemu_LookupIconIdFromDirectoryEx(struct qemu_syscall *call);
void qemu_MapDialogRect(struct qemu_syscall *call);
void qemu_MapVirtualKeyA(struct qemu_syscall *call);
void qemu_MapVirtualKeyExA(struct qemu_syscall *call);
void qemu_MapVirtualKeyExW(struct qemu_syscall *call);
void qemu_MapVirtualKeyW(struct qemu_syscall *call);
void qemu_ModifyMenuA(struct qemu_syscall *call);
void qemu_ModifyMenuW(struct qemu_syscall *call);
void qemu_mouse_event(struct qemu_syscall *call);
void qemu_NotifyWinEvent(struct qemu_syscall *call);
void qemu_OemKeyScan(struct qemu_syscall *call);
void qemu_OemToCharA(struct qemu_syscall *call);
void qemu_OpenClipboard(struct qemu_syscall *call);
void qemu_PaintDesktop(struct qemu_syscall *call);
void qemu_PrivateExtractIconExA(struct qemu_syscall *call);
void qemu_PrivateExtractIconExW(struct qemu_syscall *call);
void qemu_PrivateExtractIconsA(struct qemu_syscall *call);
void qemu_PrivateExtractIconsW(struct qemu_syscall *call);
void qemu_RealGetWindowClassA(struct qemu_syscall *call);
void qemu_RealGetWindowClassW(struct qemu_syscall *call);
void qemu_RegisterClassA(struct qemu_syscall *call);
void qemu_RegisterClassExA(struct qemu_syscall *call);
void qemu_RegisterClassExW(struct qemu_syscall *call);
void qemu_RegisterClassW(struct qemu_syscall *call);
void qemu_RegisterClipboardFormatA(struct qemu_syscall *call);
void qemu_RegisterClipboardFormatW(struct qemu_syscall *call);
void qemu_RegisterHotKey(struct qemu_syscall *call);
void qemu_ReleaseCapture(struct qemu_syscall *call);
void qemu_RemoveClipboardFormatListener(struct qemu_syscall *call);
void qemu_RemoveMenu(struct qemu_syscall *call);
void qemu_ScrollChildren(struct qemu_syscall *call);
void qemu_SendDlgItemMessageA(struct qemu_syscall *call);
void qemu_SendDlgItemMessageW(struct qemu_syscall *call);
void qemu_SendInput(struct qemu_syscall *call);
void qemu_SetActiveWindow(struct qemu_syscall *call);
void qemu_SetCapture(struct qemu_syscall *call);
void qemu_SetCaretBlinkTime(struct qemu_syscall *call);
void qemu_SetCaretPos(struct qemu_syscall *call);
void qemu_SetClassLongA(struct qemu_syscall *call);
void qemu_SetClassLongPtrA(struct qemu_syscall *call);
void qemu_SetClassLongPtrW(struct qemu_syscall *call);
void qemu_SetClassLongW(struct qemu_syscall *call);
void qemu_SetClassWord(struct qemu_syscall *call);
void qemu_SetClipboardData(struct qemu_syscall *call);
void qemu_SetClipboardViewer(struct qemu_syscall *call);
void qemu_SetCursor(struct qemu_syscall *call);
void qemu_SetCursorPos(struct qemu_syscall *call);
void qemu_SetDeskWallPaper(struct qemu_syscall *call);
void qemu_SetDlgItemInt(struct qemu_syscall *call);
void qemu_SetDlgItemTextA(struct qemu_syscall *call);
void qemu_SetDlgItemTextW(struct qemu_syscall *call);
void qemu_SetFocus(struct qemu_syscall *call);
void qemu_SetForegroundWindow(struct qemu_syscall *call);
void qemu_SetKeyboardState(struct qemu_syscall *call);
void qemu_SetMenu(struct qemu_syscall *call);
void qemu_SetMenuContextHelpId(struct qemu_syscall *call);
void qemu_SetMenuDefaultItem(struct qemu_syscall *call);
void qemu_SetMenuInfo(struct qemu_syscall *call);
void qemu_SetMenuItemBitmaps(struct qemu_syscall *call);
void qemu_SetMenuItemInfoA(struct qemu_syscall *call);
void qemu_SetMenuItemInfoW(struct qemu_syscall *call);
void qemu_SetPhysicalCursorPos(struct qemu_syscall *call);
void qemu_SetProgmanWindow(struct qemu_syscall *call);
void qemu_SetShellWindow(struct qemu_syscall *call);
void qemu_SetShellWindowEx(struct qemu_syscall *call);
void qemu_SetSystemCursor(struct qemu_syscall *call);
void qemu_SetSystemMenu(struct qemu_syscall *call);
void qemu_SetTaskmanWindow(struct qemu_syscall *call);
void qemu_SetWindowsHookA(struct qemu_syscall *call);
void qemu_SetWindowsHookExA(struct qemu_syscall *call);
void qemu_SetWindowsHookExW(struct qemu_syscall *call);
void qemu_SetWindowsHookW(struct qemu_syscall *call);
void qemu_SetWinEventHook(struct qemu_syscall *call);
void qemu_ShowCaret(struct qemu_syscall *call);
void qemu_ShowCursor(struct qemu_syscall *call);
void qemu_TileChildWindows(struct qemu_syscall *call);
void qemu_TileWindows(struct qemu_syscall *call);
void qemu_ToAscii(struct qemu_syscall *call);
void qemu_ToAsciiEx(struct qemu_syscall *call);
void qemu_ToUnicode(struct qemu_syscall *call);
void qemu_ToUnicodeEx(struct qemu_syscall *call);
void qemu_TrackMouseEvent(struct qemu_syscall *call);
void qemu_TrackPopupMenu(struct qemu_syscall *call);
void qemu_TrackPopupMenuEx(struct qemu_syscall *call);
void qemu_TranslateAcceleratorA(struct qemu_syscall *call);
void qemu_TranslateAcceleratorW(struct qemu_syscall *call);
void qemu_TranslateMDISysAccel(struct qemu_syscall *call);
void qemu_UnhookWindowsHook(struct qemu_syscall *call);
void qemu_UnhookWindowsHookEx(struct qemu_syscall *call);
void qemu_UnhookWinEvent(struct qemu_syscall *call);
void qemu_UnloadKeyboardLayout(struct qemu_syscall *call);
void qemu_UnregisterClassA(struct qemu_syscall *call);
void qemu_UnregisterClassW(struct qemu_syscall *call);
void qemu_UnregisterHotKey(struct qemu_syscall *call);
void qemu_VkKeyScanA(struct qemu_syscall *call);
void qemu_VkKeyScanW(struct qemu_syscall *call);

#endif

#endif
