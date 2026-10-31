/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121d97 */

undefined4 FUN_180121d97(int param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar1 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  if ((*(byte *)(DAT_180419160 + 0x2acd) & 4) != 0) {
    FUN_1800fdfea("[docking] DockBuilderAddNode 0x%08X flags=%08X\n",param_1,param_2);
  }
  if (param_1 != 0) {
    FUN_180121e5d(param_1);
  }
  if ((param_2 >> 10 & 1) == 0) {
    puVar2 = (undefined4 *)FUN_180120d7d(lVar1,param_1);
    puVar2[2] = param_2;
    puVar2[4] = puVar2[1] | puVar2[3] | param_2;
  }
  else {
    local_28 = 0;
    FUN_180121774(param_1,&local_28,(param_2 & 0xfffffbfe) + 1,0);
    puVar2 = (undefined4 *)FUN_180120868(lVar1,param_1);
  }
  puVar2[0x2d] = *(undefined4 *)(lVar1 + 4);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

