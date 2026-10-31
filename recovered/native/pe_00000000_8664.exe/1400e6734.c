/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e6734 */

void thunk_FUN_1400e61f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [44];
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if ((DAT_140e8c780 <= *(float *)(param_1 + 0x14)) || ((*(byte *)(param_1 + 0x4f) & 0x10) != 0)) {
    uStack_1c = 0;
    lVar1 = FUN_1400e5ef0(param_1,param_2,&uStack_1c);
    puVar2 = (undefined4 *)(lVar1 + 4);
    if (lVar1 == 0) {
      puVar2 = &uStack_1c;
    }
    uVar3 = *puVar2;
  }
  else {
    lVar1 = FUN_1400e5ef0(param_1,param_2,0);
    puVar2 = (undefined4 *)(param_1 + 0x10);
    if (lVar1 != 0) {
      puVar2 = (undefined4 *)(lVar1 + 4);
    }
    uVar3 = *puVar2;
  }
  if (DAT_140f17b40 == (uStack_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(uVar3);
}

