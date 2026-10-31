/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100317e2 */

undefined4 __thiscall FUN_100317e2(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_40 [3];
  char local_3d;
  int *local_3c;
  uint local_38;
  undefined1 *local_34;
  int *piStack_30;
  undefined1 auStack_29 [21];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_40;
  iVar8 = *param_1;
  if (iVar8 != 0) {
    iVar4 = param_3[1];
    uVar5 = iVar4 + 1;
    if ((uint)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3,uVar5);
      iVar4 = param_3[1];
      uVar5 = iVar4 + 1;
    }
    param_3[1] = uVar5;
    *(char *)(*param_3 + iVar4) = (char)(0x202b2d00 >> ((byte)(iVar8 << 3) & 0x1f));
  }
  cVar2 = (char)param_1[7];
  iVar8 = param_1[6];
  piVar1 = param_1 + 2;
  uVar9 = *(undefined8 *)piVar1;
  if (cVar2 == '\0') {
    FUN_100255fd(auStack_29,*piVar1,param_1[3],iVar8);
    puVar7 = auStack_29 + iVar8;
  }
  else {
    puVar7 = auStack_29 + iVar8 + 1;
    local_38 = iVar8 - 1;
    local_3d = cVar2;
    local_3c = param_1;
    local_34 = puVar7;
    uVar3 = *(undefined8 *)piVar1;
    if (2 < iVar8) {
      uVar5 = (local_38 >> 1) + 1;
      puVar6 = puVar7;
      do {
        iVar8 = (int)uVar9;
        uVar9 = __aulldiv(uVar9,100,0);
        puVar7 = puVar6 + -2;
        *(undefined2 *)(puVar6 + -2) =
             *(undefined2 *)(&DAT_102903d0 + ((int)uVar9 * -100 + iVar8) * 2);
        uVar5 = uVar5 - 1;
        puVar6 = puVar7;
        uVar3 = uVar9;
      } while (1 < uVar5);
    }
    uVar9 = uVar3;
    if ((local_38 & 1) != 0) {
      uVar9 = __aulldiv(uVar3,10,0);
      puVar7[-1] = (char)uVar9 * -10 + (char)uVar3 | 0x30;
      puVar7 = puVar7 + -1;
    }
    param_1 = local_3c;
    puVar7[-1] = local_3d;
    FUN_100255fd(puVar7 + -2,uVar9,1);
    puVar7 = local_34;
  }
  FUN_100253ad(&piStack_30,auStack_29,puVar7,param_3);
  iVar8 = param_1[8];
  if (0 < iVar8) {
    do {
      iVar4 = piStack_30[1];
      uVar5 = iVar4 + 1;
      if ((uint)piStack_30[2] < uVar5) {
        (*(code *)piStack_30[3])(piStack_30,uVar5);
        iVar4 = piStack_30[1];
        uVar5 = iVar4 + 1;
      }
      piStack_30[1] = uVar5;
      *(undefined1 *)(*piStack_30 + iVar4) = 0x30;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_3c = (int *)CONCAT31(local_3c._1_3_,(char)param_1[9]);
  iVar8 = piStack_30[1];
  uVar5 = iVar8 + 1;
  if ((uint)piStack_30[2] < uVar5) {
    (*(code *)piStack_30[3])(piStack_30,uVar5);
    iVar8 = piStack_30[1];
    uVar5 = iVar8 + 1;
  }
  piStack_30[1] = uVar5;
  *(undefined1 *)(*piStack_30 + iVar8) = local_3c._0_1_;
  FUN_10028c00(param_2,param_1[10],piStack_30);
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

