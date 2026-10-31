/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009aeee */

undefined8 FUN_14009aeee(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined1 local_b8 [56];
  undefined8 local_80;
  char *local_78;
  char *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 **local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar1 = FUN_14008aab0(param_1 + 0x10);
  if (uVar1 != 0) {
    local_48 = (undefined8 **)(ulonglong)uVar1;
    FUN_140089bf6(param_1,&local_68);
    if (DAT_1401cc8c6 == '\x01') {
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_1400061f6(&local_48,local_68,
                    (local_60 - local_68) - (ulonglong)(*(char *)(local_60 + -1) == '\0'));
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4) < DAT_1401cc948) {
        FUN_1400dd790(&DAT_1401cc948);
        if (DAT_1401cc948 == -1) {
          FUN_14007709a(&DAT_1401cc8d0);
          FUN_1400d3740(&LAB_140098bbf);
          _Init_thread_footer(&DAT_1401cc948);
        }
      }
      pppuVar2 = &local_48;
      if (0xf < uStack_30) {
        pppuVar2 = (undefined8 ***)local_48;
      }
      FUN_140007482(&DAT_1401cc8d0,param_2,pppuVar2,local_38 + (longlong)pppuVar2);
      FUN_1400017de(&local_48);
    }
    else {
      FUN_14009bb04(param_2,&local_68);
    }
    FUN_140016e5c(&local_68);
    return param_2;
  }
  local_80 = 0x1b0000010f;
  local_78 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\FileCoder.hpp"
  ;
  local_70 = "tString __cdecl FileCoder::ReadString(void)";
  FUN_140087f79(&local_68);
  FUN_14000ed8c(&local_48,&local_68,"Zero length string encountered.");
  FUN_1400886d4(local_b8,&local_48);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_b8,&DAT_1401a5720);
}

