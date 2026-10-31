/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007f4e8 */

void __thiscall
FUN_1007f4e8(undefined4 *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 unaff_BL;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint unaff_EBP;
  int unaff_EDI;
  int unaff_retaddr;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iStack_14;
  
  switch(*param_2) {
  case 0:
    puVar9 = *(undefined4 **)*param_1;
    uVar12 = 0x410336678;
    goto LAB_1007fb45;
  case 1:
    puVar9 = *(undefined4 **)*param_1;
    if (**(int **)(param_2 + 8) != (*(int **)(param_2 + 8))[1]) {
      if ((char)param_3 != '\0') {
        (*(code *)puVar9[1])(&DAT_1034c849,2);
        param_4 = param_4 + param_5;
        puVar9 = param_1 + 0x94;
        if ((uint)param_1[0x98] < param_4) {
          FUN_1000396a(param_1[0x98] * 2,0x20);
        }
        iVar5 = **(int **)(unaff_EBP + 8);
        uVar12 = CONCAT44(iVar5,param_4);
        if ((*(int **)(unaff_EBP + 8))[1] - iVar5 != 0x28) {
          uVar6 = 0;
          uVar1 = (uint)param_2 & 0xff;
          do {
            puVar2 = param_1 + 0x94;
            if (0xf < (uint)param_1[0x99]) {
              puVar2 = (undefined4 *)param_1[0x94];
            }
            (**(code **)(*(int *)*param_1 + 4))(puVar2,(int)uVar12,uVar12,puVar9,uVar1);
            uVar11 = (undefined4)uVar12;
            (*(code *)**(undefined4 **)*param_1)(0x22);
            uVar10 = uVar11;
            FUN_10056e10(puVar2,uVar11);
            puVar8 = &DAT_1034bbfc;
            (**(code **)(*(int *)*param_1 + 4))(&DAT_1034bbfc,3);
            FUN_1007f4e8(puVar2 + 6,1,uVar11,unaff_EDI,puVar8);
            (**(code **)(*(int *)*param_1 + 4))(&DAT_10355429,2);
            uVar6 = uVar6 + 1;
            uVar12 = CONCAT44(puVar2 + 10,uVar10);
            param_5 = param_3;
          } while (uVar6 < ((*(int **)(unaff_EBP + 8))[1] - **(int **)(unaff_EBP + 8) >> 3) *
                           -0x33333333 - 1U);
        }
        puVar2 = param_1 + 0x94;
        if (0xf < (uint)param_1[0x99]) {
          puVar2 = (undefined4 *)param_1[0x94];
        }
        (**(code **)(*(int *)*param_1 + 4))(puVar2,(int)uVar12);
        (*(code *)**(undefined4 **)*param_1)(0x22);
        FUN_10056e10(puVar2,unaff_BL);
        puVar9 = (undefined4 *)0x3;
        puVar8 = &DAT_1034bbfc;
        (**(code **)(*(int *)*param_1 + 4))(&DAT_1034bbfc,3);
        FUN_1007f4e8(puVar2 + 6,1,unaff_BL,param_5,puVar8);
        (*(code *)**(undefined4 **)*param_1)(10);
        if (0xf < (uint)param_1[0x99]) {
          puVar9 = (undefined4 *)param_1[0x94];
        }
        iVar5 = *(int *)*param_1;
        goto LAB_1007fb2d;
      }
      (*(code *)*puVar9)();
      iVar5 = **(int **)(unaff_retaddr + 8);
      if ((*(int **)(unaff_retaddr + 8))[1] - iVar5 != 0x28) {
        uVar1 = 0;
        do {
          (*(code *)**(undefined4 **)*param_1)(0x22);
          FUN_10056e10(iVar5,param_3 & 0xff);
          (**(code **)(*(int *)*param_1 + 4))(&DAT_1033da8e,2);
          FUN_1007f4e8(iVar5 + 0x18,0,param_3 & 0xff,unaff_retaddr,param_2);
          (*(code *)**(undefined4 **)*param_1)(0x2c);
          uVar1 = uVar1 + 1;
          iVar5 = iVar5 + 0x28;
          param_5 = param_4;
        } while (uVar1 < ((*(int **)(unaff_retaddr + 8))[1] - **(int **)(unaff_retaddr + 8) >> 3) *
                         -0x33333333 - 1U);
      }
      (*(code *)**(undefined4 **)*param_1)(0x22);
      FUN_10056e10(iVar5,(uint)param_2 & 0xff);
      (**(code **)(*(int *)*param_1 + 4))(&DAT_1033da8e,2);
      FUN_1007f4e8(iVar5 + 0x18,0,(uint)param_2 & 0xff,param_5,param_6);
LAB_1007fb30:
      puVar9 = *(undefined4 **)*param_1;
      goto LAB_1007fb36;
    }
    uVar12 = 0x21032fb35;
    goto LAB_1007fb45;
  case 2:
    puVar9 = *(undefined4 **)*param_1;
    if (**(int **)(param_2 + 8) != (*(int **)(param_2 + 8))[1]) {
      if ((char)param_3 == '\0') {
        (*(code *)*puVar9)();
        iVar5 = **(int **)(param_2 + 8);
        iVar4 = (*(int **)(param_2 + 8))[1] + -0x10;
        if (iVar5 != iVar4) {
          do {
            FUN_1007f4e8(iVar5,0,param_4 & 0xff,param_5,param_6);
            (*(code *)**(undefined4 **)*param_1)();
            iVar5 = iVar5 + 0x10;
            iVar4 = *(int *)(*(int *)(param_2 + 8) + 4) + -0x10;
          } while (iVar5 != iVar4);
        }
        FUN_1007f4e8(iVar4,0,param_4 & 0xff,param_5,param_6);
      }
      else {
        uVar10 = 2;
        (*(code *)puVar9[1])(&DAT_1034d4b1,2);
        param_4 = param_4 + param_5;
        uVar12 = CONCAT44(uVar10,param_1 + 0x94);
        if ((uint)param_1[0x98] < param_4) {
          FUN_1000396a(param_1[0x98] * 2,0x20);
        }
        iVar5 = **(int **)(unaff_EBP + 8);
        if (iVar5 != (*(int **)(unaff_EBP + 8))[1] + -0x10) {
          do {
            puVar9 = param_1 + 0x94;
            if (0xf < (uint)param_1[0x99]) {
              puVar9 = (undefined4 *)param_1[0x94];
            }
            (**(code **)(*(int *)*param_1 + 4))(puVar9,param_4,uVar12);
            FUN_1007f4e8(iVar5,1,(uint)param_2 & 0xff,unaff_retaddr,param_4);
            (**(code **)(*(int *)*param_1 + 4))(&DAT_10355429,2);
            iVar5 = iVar5 + 0x10;
          } while (iVar5 != *(int *)(*(int *)(unaff_EBP + 8) + 4) + -0x10);
        }
        puVar9 = param_1 + 0x94;
        if (0xf < (uint)param_1[0x99]) {
          puVar9 = (undefined4 *)param_1[0x94];
        }
        (**(code **)(*(int *)*param_1 + 4))(puVar9,param_4);
        FUN_1007f4e8(*(int *)(*(int *)(unaff_EDI + 8) + 4) + -0x10,1,unaff_EBP & 0xff,unaff_retaddr,
                     param_4);
        uVar10 = 10;
        (*(code *)**(undefined4 **)*param_1)(10);
        if (0xf < (uint)param_1[0x99]) {
          uVar10 = param_1[0x94];
        }
        (**(code **)(*(int *)*param_1 + 4))(uVar10,unaff_retaddr);
      }
      puVar9 = *(undefined4 **)*param_1;
      goto LAB_1007fb36;
    }
    uVar12 = 0x21033b8eb;
    goto LAB_1007fb45;
  case 3:
    (*(code *)**(undefined4 **)*param_1)();
    FUN_10056e10(*(undefined4 *)(param_2 + 8),param_4 & 0xff);
    puVar9 = *(undefined4 **)*param_1;
LAB_1007fb36:
    (*(code *)*puVar9)();
    break;
  case 4:
    if (param_2[8] == '\x01') {
      uVar12 = 0x410338ab9;
    }
    else {
      uVar12 = 0x510338e2d;
    }
    (**(code **)(*(int *)*param_1 + 4))(uVar12);
    break;
  case 5:
    FUN_1005758e(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    break;
  case 6:
    FUN_10057450(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    break;
  case 7:
    FUN_10057774(*(undefined8 *)(param_2 + 8));
    break;
  case 8:
    if ((char)param_3 != '\0') {
      (**(code **)(*(int *)*param_1 + 4))(&DAT_1034c849,2);
      param_5 = param_5 + param_4;
      puVar9 = param_1 + 0x94;
      if ((uint)param_1[0x98] < param_5) {
        FUN_1000396a(param_1[0x98] * 2,0x20);
      }
      puVar2 = puVar9;
      if (0xf < (uint)param_1[0x99]) {
        puVar2 = (undefined4 *)param_1[0x94];
      }
      uVar1 = param_5;
      (**(code **)(*(int *)*param_1 + 4))(puVar2);
      (**(code **)(*(int *)*param_1 + 4))(&DAT_1033b938,10);
      puVar7 = (undefined1 *)**(undefined4 **)(param_2 + 8);
      puVar3 = (undefined1 *)(*(undefined4 **)(param_2 + 8))[1];
      if (puVar7 != puVar3) {
        puVar3 = puVar3 + -1;
        if (puVar7 != puVar3) {
          do {
            FUN_100573c0(*puVar7);
            (**(code **)(*(int *)*param_1 + 4))(&DAT_1034bc80,2);
            puVar7 = puVar7 + 1;
            puVar3 = (undefined1 *)(*(int *)(*(int *)(iStack_14 + 8) + 4) + -1);
          } while (puVar7 != puVar3);
        }
        FUN_100573c0(*puVar3);
      }
      (**(code **)(*(int *)*param_1 + 4))(&DAT_10355428,3);
      puVar2 = puVar9;
      if (0xf < (uint)param_1[0x99]) {
        puVar2 = (undefined4 *)param_1[0x94];
      }
      (**(code **)(*(int *)*param_1 + 4))(puVar2,param_5);
      (**(code **)(*(int *)*param_1 + 4))(&DAT_1034bbf4,0xb);
      iVar5 = *(int *)(uVar1 + 8);
      if (*(char *)(iVar5 + 0x18) == '\x01') {
        FUN_10057450(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14));
      }
      else {
        (**(code **)(*(int *)*param_1 + 4))("null",4);
      }
      (*(code *)**(undefined4 **)*param_1)(10);
      if (0xf < (uint)param_1[0x99]) {
        puVar9 = (undefined4 *)param_1[0x94];
      }
      iVar5 = *(int *)*param_1;
LAB_1007fb2d:
      (**(code **)(iVar5 + 4))(puVar9,unaff_EDI);
      goto LAB_1007fb30;
    }
    (**(code **)(*(int *)*param_1 + 4))("{\"bytes\":[",10);
    puVar7 = (undefined1 *)**(undefined4 **)(param_2 + 8);
    puVar3 = (undefined1 *)(*(undefined4 **)(param_2 + 8))[1];
    if (puVar7 != puVar3) {
      for (; puVar7 != puVar3 + -1; puVar7 = puVar7 + 1) {
        FUN_100573c0(*puVar7);
        (*(code *)**(undefined4 **)*param_1)(0x2c);
        puVar3 = *(undefined1 **)(*(int *)(param_2 + 8) + 4);
      }
      FUN_100573c0(puVar3[-1]);
    }
    (**(code **)(*(int *)*param_1 + 4))(&DAT_1033da84,0xc);
    iVar5 = *(int *)(param_2 + 8);
    if (*(char *)(iVar5 + 0x18) == '\x01') {
      FUN_10057450(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14));
      goto LAB_1007fb30;
    }
    puVar9 = *(undefined4 **)*param_1;
    uVar12 = 0x51032fbab;
    goto LAB_1007fb45;
  case 9:
    puVar9 = *(undefined4 **)*param_1;
    uVar12 = 0xb1033cf99;
LAB_1007fb45:
    (*(code *)puVar9[1])(uVar12);
  }
  return;
}

