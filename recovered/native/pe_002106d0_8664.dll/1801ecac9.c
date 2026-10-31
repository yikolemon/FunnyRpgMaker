/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ecac9 */

undefined8
FUN_1801ecac9(longlong param_1,int param_2,uint param_3,ulonglong param_4,longlong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  ushort *local_58;
  ushort local_4c;
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  if ((param_4 & 0x10) == 0) {
    if ((((*(uint *)(param_1 + 4) & 0x7fff0000) != 0) || ((*(byte *)(param_1 + 9) & 0x80) != 0)) &&
       (uVar2 = 7, (*(byte *)(param_1 + 0x410) & 2) == 0)) goto LAB_1801ecbbe;
    if (param_3 != 0) {
      uVar2 = 0;
      uVar1 = 0;
      do {
        FUN_1801f5e54(param_1,param_2 + (int)uVar1,local_4a,&local_4c);
        *(uint *)(param_5 + uVar1 * 4) = (uint)local_4c;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
      goto LAB_1801ecbbe;
    }
  }
  else {
    if ((((*(uint *)(param_1 + 4) & 0x7fff0000) != 0) || ((*(byte *)(param_1 + 9) & 0x80) != 0)) &&
       (uVar2 = 7, (*(byte *)(param_1 + 0x410) & 0x10) == 0)) goto LAB_1801ecbbe;
    if (param_3 != 0) {
      uVar2 = 0;
      uVar1 = 0;
      do {
        local_58 = &local_4c;
        FUN_1801f5e7c(param_1,param_2 + (int)uVar1,0,local_4a);
        *(uint *)(param_5 + uVar1 * 4) = (uint)local_4c;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
      goto LAB_1801ecbbe;
    }
  }
  uVar2 = 0;
LAB_1801ecbbe:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar2;
}

