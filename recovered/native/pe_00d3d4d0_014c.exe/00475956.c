/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00475956 */

int __fastcall FUN_00475956(byte *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_98;
  int local_94 [32];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_98;
  piVar3 = local_94;
  iVar4 = 0;
  local_98 = param_2;
  do {
    while( true ) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 4) * iVar4;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 4) * param_3;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      uVar1 = FUN_00475b18(param_1,local_98);
      if ((char)uVar1 != '\0') break;
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_00475bf3((int)param_1);
      }
      if (piVar3 == local_94) {
        iVar2 = 0;
LAB_004759e5:
        if (DAT_0050e8c0 == (local_14 ^ (uint)&local_98)) {
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_14 ^ (uint)&local_98);
      }
      param_3 = iVar4 + -1;
      iVar4 = piVar3[-1];
      piVar3 = piVar3 + -1;
    }
    iVar2 = *(int *)(param_1 + 0x24);
    if (iVar2 != 0x62) goto LAB_004759e5;
    if (iVar4 == param_3) {
      iVar2 = 0x62;
      goto LAB_004759e5;
    }
    *piVar3 = iVar4;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + param_3 + 1 >> 1;
  } while( true );
}

