/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10090c18 */

ushort * __thiscall FUN_10090c18(int param_1,int param_2,ushort *param_3)

{
  char cVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int unaff_EBP;
  uint uVar7;
  
  uVar2 = (uint)*param_3;
  if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
    uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x68) + 4) + 0x20))(uVar2);
  }
  uVar7 = uVar2 & 0xffff;
  if ((*(int *)(param_2 + 0x14) != 0) &&
     (puVar3 = (ushort *)
               FUN_10090f76(uVar7,param_3,*(undefined4 *)(param_1 + 0x70),*(int *)(param_2 + 0x14),
                            *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74)),
     puVar3 != param_3)) goto LAB_10090e1c;
  puVar3 = param_3 + 1;
  iVar4 = *(int *)(param_2 + 0x20);
  if (iVar4 != 0) {
    if ((*(byte *)(param_1 + 0x75) & 8) == 0) {
      cVar1 = FUN_1009129f(uVar7,iVar4);
    }
    else {
      cVar1 = FUN_100910e7(uVar7,iVar4,*(undefined4 *)(param_1 + 0x68));
    }
    if (cVar1 != '\0') goto LAB_10090e1c;
  }
  if (uVar7 < 0x100) {
    if (*(int *)(param_2 + 0x18) != 0) {
      uVar2 = (uint)((*(byte *)(*(int *)(param_2 + 0x18) + (uVar7 >> 3)) >> (uVar2 & 7) & 1) != 0);
      goto LAB_10090e1f;
    }
    goto LAB_10090e18;
  }
  iVar4 = *(int *)(param_2 + 0x1c);
  if ((iVar4 == 0) ||
     (iVar4 = FUN_10044e04(*(int *)(iVar4 + 8),*(int *)(iVar4 + 8) + *(int *)(iVar4 + 4) * 2,uVar7),
     iVar4 == *(int *)(*(int *)(param_2 + 0x1c) + 4) * 2 + *(int *)(*(int *)(param_2 + 0x1c) + 8)))
  {
    sVar6 = *(short *)(param_2 + 0x24);
    if (sVar6 != 0) {
      sVar5 = 0x107;
      if (sVar6 != -1) {
        sVar5 = sVar6;
      }
      cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x68) + 4) + 0x10))((int)sVar5,uVar7);
      if (cVar1 != '\0') goto LAB_10090e1c;
    }
    if ((((*(byte *)(param_2 + 9) & 8) == 0) ||
        (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x68) + 4) + 0x10))(0x107,uVar7),
        cVar1 == '\0')) &&
       ((*(int *)(param_2 + 0x28) == 0 ||
        (cVar1 = FUN_100912df(uVar7,*(int *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x68)),
        cVar1 == '\0')))) {
      uVar2 = *(uint *)(param_2 + 8);
      if ((uVar2 >> 8 & 1) != 0) {
        sVar5 = (short)*(undefined4 *)(param_1 + 0x80);
        sVar6 = 0x107;
        if (sVar5 != -1) {
          sVar6 = sVar5;
        }
        cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x68) + 4) + 0x10))((int)sVar6,uVar7);
        if (cVar1 != '\0') {
          uVar2 = *(uint *)(param_2 + 8);
          goto LAB_10090db4;
        }
LAB_10090e33:
        uVar2 = 1;
        goto LAB_10090e1f;
      }
LAB_10090db4:
      if ((uVar2 >> 9 & 1) != 0) {
        sVar6 = 0x107;
        if (*(short *)(param_1 + 0x82) != -1) {
          sVar6 = *(short *)(param_1 + 0x82);
        }
        cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x68) + 4) + 0x10))((int)sVar6,uVar7);
        if (cVar1 == '\0') goto LAB_10090e33;
        uVar2 = *(uint *)(param_2 + 8);
      }
      if ((uVar2 >> 10 & 1) != 0) {
        sVar5 = (short)*(undefined4 *)(param_1 + 0x84);
        sVar6 = 0x107;
        if (sVar5 != -1) {
          sVar6 = sVar5;
        }
        cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x68) + 4) + 0x10))((int)sVar6,uVar7);
        param_2 = unaff_EBP;
        if (cVar1 == '\0') goto LAB_10090e1c;
      }
LAB_10090e18:
      uVar2 = 0;
      goto LAB_10090e1f;
    }
  }
LAB_10090e1c:
  uVar2 = 1;
LAB_10090e1f:
  if (uVar2 == (*(uint *)(param_2 + 8) & 1)) {
    puVar3 = param_3;
  }
  return puVar3;
}

