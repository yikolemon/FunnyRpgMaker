/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420d96 */

undefined1 __cdecl FUN_00420d96(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_14 [3];
  undefined1 local_11;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)auStack_14;
  local_11 = 0;
  uVar2 = param_1[2];
  uVar3 = 0x55;
  if (uVar2 < (uint)param_1[1]) {
    if ((code *)param_1[5] == (code *)0x0) {
      local_11 = *(undefined1 *)(*param_1 + uVar2);
    }
    else {
      iVar1 = (*(code *)param_1[5])(param_1,uVar2,&local_11,1);
      if (iVar1 != 1) goto LAB_00420def;
      uVar2 = param_1[2];
    }
    param_1[2] = uVar2 + 1;
    uVar3 = 0;
  }
LAB_00420def:
  *param_2 = uVar3;
  if (DAT_0050e8c0 == (local_10 ^ (uint)auStack_14)) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)auStack_14);
}

