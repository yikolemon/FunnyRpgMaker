/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802008ad */

undefined8 FUN_1802008ad(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  ushort *local_58;
  undefined1 local_4c [2];
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = 7;
  if ((uVar1 & 8) == 0) goto LAB_180200990;
  if ((param_4 & 0x10) == 0) {
    if (*(short *)(param_1 + 0x15a) == 0) goto LAB_180200990;
    if ((uVar1 & 0x8000) != 0 || (*(uint *)(param_1 + 4) & 0x7fff0000) != 0) {
      bVar2 = *(byte *)(param_1 + 0x410) & 2;
joined_r0x00018020093b:
      if (bVar2 == 0) goto LAB_180200990;
    }
  }
  else {
    if (*(char *)(param_1 + 400) == '\0') goto LAB_180200990;
    if ((uVar1 & 0x8000) != 0 || (*(uint *)(param_1 + 4) & 0x7fff0000) != 0) {
      bVar2 = *(byte *)(param_1 + 0x410) & 0x10;
      goto joined_r0x00018020093b;
    }
  }
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      local_58 = &local_4a;
      (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x150))
                (param_1,(param_4 & 0x10) >> 4,(int)uVar4 + param_2,local_4c);
      *(uint *)(param_5 + uVar4 * 4) = (uint)local_4a;
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  uVar3 = 0;
LAB_180200990:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

