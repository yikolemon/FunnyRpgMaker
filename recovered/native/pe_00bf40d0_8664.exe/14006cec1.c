/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006cec1 */

void FUN_14006cec1(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 local_78 [32];
  uint local_4c [3];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)local_78;
  if ((int)param_1[1] == 0) {
    iVar4 = 6;
    if ((int)param_1[2] == 1) {
      lVar1 = *param_1;
      puVar6 = (uint *)((longlong)param_1 + (ulonglong)((uint)(param_2 != 0) * 0x30) + 0x18);
      lVar7 = 0;
      do {
        uVar2 = FUN_140021867(*(int *)(param_3 + 4 + lVar7 * 2));
        uVar3 = FUN_140021867(*(int *)(param_3 + lVar7 * 2));
        uVar5 = FUN_14006d403(puVar6,(int)uVar3 >> 0x10,(int)uVar2 >> 0x10,lVar1,
                              (uint *)((longlong)local_4c + lVar7));
        iVar4 = (int)uVar5;
        if (iVar4 != 0) goto LAB_14006cf7c;
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0xc);
      iVar4 = FUN_14006d7b0((longlong)puVar6,local_4c[0],local_4c[1],local_4c[2],lVar1);
      if (iVar4 == 0) goto LAB_14006cf7f;
    }
LAB_14006cf7c:
    *(int *)(param_1 + 1) = iVar4;
  }
LAB_14006cf7f:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)local_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)local_78);
}

