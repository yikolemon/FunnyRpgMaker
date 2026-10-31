/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a8d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1404a8d00(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  lVar4 = FUN_1404aa3c0(param_1);
  if (lVar4 == -1) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0] = 0;
    iVar2 = (*(code *)s_IsDebuggerPresent_14059e1ac._4_8_)(lVar4,param_2,local_18,param_3);
    if (iVar2 == 0) {
      uVar3 = (*_DAT_14059df60)();
      FUN_14048fc7c(uVar3,param_4);
    }
    else if (local_18[0] != -1) {
      pbVar1 = (byte *)((&DAT_1406328d0)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return local_18[0];
    }
  }
  return -1;
}

