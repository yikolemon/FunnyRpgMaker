/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00474098 */

int __fastcall FUN_00474098(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_94 [32];
  uint local_14;
  
  piVar4 = local_94;
  local_14 = DAT_0050e8c0 ^ (uint)local_94;
  *(undefined4 *)param_1[6] = 0x7fffffff;
  iVar3 = 0;
  *(undefined4 *)(param_1[6] + 8) = 0;
  *(undefined4 *)(param_1[6] + 4) = 0;
  *(undefined4 *)(param_1[6] + 0xc) = 0;
  iVar1 = param_1[1];
  param_1[9] = param_1[5];
  do {
    iVar5 = param_1[3] - iVar1;
    if (iVar5 != 0 && iVar1 <= param_1[3]) {
      iVar1 = param_1[6];
      iVar2 = 0;
      do {
        *(int *)(param_1[9] + iVar2 * 4) = iVar1;
        iVar2 = iVar2 + 1;
      } while (iVar5 != iVar2);
    }
    param_1[8] = (iVar5 * 4 + 0xfU & 0xfffffff0) + param_1[5];
    param_1[7] = param_1[6];
    param_1[4] = 0;
    iVar1 = FUN_00474193((int)param_1,iVar3);
    if (iVar1 == 0x62) {
      if (iVar5 >> 1 == 0) goto LAB_00474165;
      iVar1 = param_1[1];
      *piVar4 = iVar1;
      piVar4 = piVar4 + 1;
      iVar1 = (iVar5 >> 1) + iVar1;
    }
    else {
      if (iVar1 != 0) {
LAB_00474165:
        if (DAT_0050e8c0 == (local_14 ^ (uint)local_94)) {
          return iVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_14 ^ (uint)local_94);
      }
      if (param_1[0x13] == 0) {
        FUN_004743ff(param_1);
      }
      else {
        FUN_004741d0(param_1);
      }
      if (piVar4 == local_94) goto LAB_00474165;
      param_1[3] = param_1[1];
      iVar1 = piVar4[-1];
      piVar4 = piVar4 + -1;
    }
    param_1[1] = iVar1;
    iVar3 = 1;
  } while( true );
}

