/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003a0fd */

undefined8
FUN_14003a0fd(longlong param_1,int param_2,uint param_3,ulonglong param_4,longlong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStackY_78 [32];
  ushort local_4c;
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  if ((param_4 & 0x10) == 0) {
    if ((((*(uint *)(param_1 + 4) & 0x7fff0000) != 0) || ((*(byte *)(param_1 + 9) & 0x80) != 0)) &&
       (uVar2 = 7, (*(byte *)(param_1 + 0x410) & 2) == 0)) goto LAB_14003a1f2;
    if (param_3 != 0) {
      uVar2 = 0;
      uVar1 = 0;
      do {
        FUN_140043488(param_1,param_2 + (int)uVar1,&local_4a,&local_4c);
        *(uint *)(param_5 + uVar1 * 4) = (uint)local_4c;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
      goto LAB_14003a1f2;
    }
  }
  else {
    if ((((*(uint *)(param_1 + 4) & 0x7fff0000) != 0) || ((*(byte *)(param_1 + 9) & 0x80) != 0)) &&
       (uVar2 = 7, (*(byte *)(param_1 + 0x410) & 0x10) == 0)) goto LAB_14003a1f2;
    if (param_3 != 0) {
      uVar2 = 0;
      uVar1 = 0;
      do {
        FUN_1400434b0(param_1,param_2 + (int)uVar1,0,&local_4a,(short *)&local_4c);
        *(uint *)(param_5 + uVar1 * 4) = (uint)local_4c;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
      goto LAB_14003a1f2;
    }
  }
  uVar2 = 0;
LAB_14003a1f2:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_78);
  }
  return uVar2;
}

