/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002dc20 */

undefined4 __thiscall FUN_1002dc20(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_34 [3];
  char local_31;
  int *local_30;
  uint local_2c;
  undefined1 *local_28;
  int *piStack_24;
  undefined1 auStack_1f [11];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_34;
  iVar7 = *param_1;
  if (iVar7 != 0) {
    iVar2 = param_3[1];
    uVar3 = iVar2 + 1;
    if ((uint)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3,uVar3);
      iVar2 = param_3[1];
      uVar3 = iVar2 + 1;
    }
    param_3[1] = uVar3;
    *(char *)(*param_3 + iVar2) = (char)(0x202b2d00 >> ((byte)(iVar7 << 3) & 0x1f));
  }
  cVar1 = (char)param_1[4];
  uVar3 = param_1[1];
  iVar7 = param_1[3];
  if (cVar1 == '\0') {
    FUN_1002472e(auStack_1f,uVar3,iVar7);
    puVar6 = auStack_1f + iVar7;
  }
  else {
    local_28 = auStack_1f + iVar7 + 1;
    local_2c = iVar7 - 1;
    puVar6 = local_28;
    if (2 < iVar7) {
      uVar5 = (local_2c >> 1) + 1;
      uVar4 = uVar3;
      do {
        uVar3 = uVar4 / 100;
        *(undefined2 *)(puVar6 + -2) = *(undefined2 *)(&DAT_102903d0 + (uVar4 % 100) * 2);
        puVar6 = puVar6 + -2;
        uVar5 = uVar5 - 1;
        uVar4 = uVar3;
      } while (1 < uVar5);
    }
    uVar4 = uVar3;
    if ((local_2c & 1) != 0) {
      uVar4 = uVar3 / 10;
      puVar6[-1] = (char)uVar3 + (char)uVar4 * -10 | 0x30;
      puVar6 = puVar6 + -1;
    }
    puVar6[-1] = cVar1;
    local_31 = cVar1;
    local_30 = param_1;
    FUN_1002472e(puVar6 + -2,uVar4,1);
    puVar6 = local_28;
    param_1 = local_30;
  }
  FUN_100253ad(&piStack_24,auStack_1f,puVar6,param_3);
  iVar7 = param_1[5];
  if (0 < iVar7) {
    do {
      iVar2 = piStack_24[1];
      uVar3 = iVar2 + 1;
      if ((uint)piStack_24[2] < uVar3) {
        (*(code *)piStack_24[3])(piStack_24,uVar3);
        iVar2 = piStack_24[1];
        uVar3 = iVar2 + 1;
      }
      piStack_24[1] = uVar3;
      *(undefined1 *)(*piStack_24 + iVar2) = 0x30;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_30 = (int *)CONCAT31(local_30._1_3_,(char)param_1[6]);
  iVar7 = piStack_24[1];
  uVar3 = iVar7 + 1;
  if ((uint)piStack_24[2] < uVar3) {
    (*(code *)piStack_24[3])(piStack_24,uVar3);
    iVar7 = piStack_24[1];
    uVar3 = iVar7 + 1;
  }
  piStack_24[1] = uVar3;
  *(undefined1 *)(*piStack_24 + iVar7) = local_30._0_1_;
  FUN_10028c00(param_2,param_1[7],piStack_24);
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

