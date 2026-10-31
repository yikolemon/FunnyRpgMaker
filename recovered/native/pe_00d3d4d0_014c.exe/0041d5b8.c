/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d5b8 */

int __fastcall FUN_0041d5b8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  piVar1 = *(int **)(param_1[1] + 0x60);
  local_1c = piVar1[2];
  iVar2 = piVar1[3];
  *param_1 = piVar1[1];
  puVar3 = FUN_0041c507(local_1c,0x2c,&local_18);
  iVar4 = local_18;
  if (local_18 != 0) goto LAB_0041d658;
  param_1[0x27] = (int)puVar3;
  if ((*(byte *)(*piVar1 + 1) & 2) == 0) {
    iVar4 = FUN_0041c4b4(local_1c,puVar3);
    if (iVar4 == 0) goto LAB_0041d619;
  }
  else {
LAB_0041d619:
    if (*(code **)(iVar2 + 0x40) == (code *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(iVar2 + 0x40))(param_1);
    }
  }
  if ((*(byte *)(param_1[1] + 10) & 1) != 0) {
    pvVar5 = FUN_0041c507(local_1c,0x44,&local_18);
    iVar4 = local_18;
    if (local_18 == 0) {
      param_1[0x26] = (int)pvVar5;
      iVar4 = 0;
    }
  }
LAB_0041d658:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_1c)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_1c);
}

