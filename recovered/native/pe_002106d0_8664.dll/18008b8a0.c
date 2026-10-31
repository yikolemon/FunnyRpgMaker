/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008b8a0 */

undefined8 FUN_18008b8a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined1 local_c8 [56];
  undefined8 local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 **local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  int local_24 [3];
  
  local_24[1] = -2;
  local_24[2] = -1;
  uVar1 = FUN_180078646(param_1 + 0x10);
  if (uVar1 != 0) {
    local_48 = (undefined8 **)(ulonglong)uVar1;
    FUN_18007750c(param_1,&local_68);
    if (DAT_180417cb8 == '\x01') {
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_180002428(&local_48,local_68,
                    (local_60 - local_68) - (ulonglong)(*(char *)(local_60 + -1) == '\0'));
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c) < DAT_180417dc0) {
        FUN_18023d500(&DAT_180417dc0);
        if (DAT_180417dc0 == -1) {
          FUN_18007645e(&DAT_180417d48);
          FUN_18023d710(&LAB_18008bdaa);
          _Init_thread_footer(&DAT_180417dc0);
        }
      }
      pppuVar2 = &local_48;
      if (0xf < uStack_30) {
        pppuVar2 = (undefined8 ***)local_48;
      }
      FUN_18008bdb6(&DAT_180417d48,param_2,pppuVar2,local_38 + (longlong)pppuVar2);
      FUN_180001ef2(&local_48);
    }
    else {
      FUN_18008bc32(param_2,&local_68);
    }
    FUN_180004cea(&local_68);
    return param_2;
  }
  local_24[0] = *(int *)(param_1 + 0x38) + -4;
  local_90 = 0x5f00000121;
  local_88 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_80 = "tString __cdecl FileCoder::ReadString(void)";
  FUN_180072a20(&local_68);
  local_78 = "{}Zero length string encountered at offset {:#010x}.";
  local_70 = 0x34;
  FUN_18008bbb3(&local_48,&local_78,&local_68,local_24);
  FUN_18006f972(local_c8,&local_48);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_c8,&DAT_1803a63b0);
}

