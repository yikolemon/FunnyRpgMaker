/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10056588 */

void __thiscall
FUN_10056588(undefined4 *param_1,undefined1 *param_2,char param_3,uint param_4,int param_5,
            int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 unaff_BL;
  uint uVar5;
  uint unaff_EBP;
  int iVar6;
  undefined1 *puVar7;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_28;
  switch(*param_2) {
  case 0:
    puVar2 = *(undefined4 **)*param_1;
    uVar11 = 0x410336678;
    goto LAB_10056c09;
  case 1:
    puVar2 = *(undefined4 **)*param_1;
    if (*(int *)(*(int *)(param_2 + 8) + 4) != 0) {
      if (param_3 != '\0') {
        (*(code *)puVar2[1])(&DAT_1034c849,2);
        uVar11 = CONCAT44(param_1 + 0x94,param_6 + param_5);
        if ((uint)param_1[0x98] < (uint)(param_6 + param_5)) {
          FUN_1000396a(param_1[0x98] * 2,0x20);
        }
        uStack_20 = *(undefined4 *)**(undefined4 **)(param_2 + 8);
        if ((*(undefined4 **)(param_2 + 8))[1] != 1) {
          uVar5 = 0;
          uStack_28 = (uint)param_2 & 0xff;
          do {
            puVar2 = param_1 + 0x94;
            if (0xf < (uint)param_1[0x99]) {
              puVar2 = (undefined4 *)param_1[0x94];
            }
            iVar10 = (int)uVar11;
            iVar6 = iVar10;
            (**(code **)(*(int *)*param_1 + 4))(puVar2,iVar10);
            (*(code *)**(undefined4 **)*param_1)(0x22);
            iVar4 = iVar6;
            FUN_10056e10((int)((ulonglong)uVar11 >> 0x20) + 0x10,iVar6);
            (**(code **)(*(int *)*param_1 + 4))(&DAT_1034bbfc,3);
            FUN_10056588(iVar4 + 0x28,1,iVar6,unaff_EDI,iVar10);
            (**(code **)(*(int *)*param_1 + 4))(&DAT_10355429,2);
            uVar5 = uVar5 + 1;
            FUN_10016fb8();
            param_5 = unaff_EDI;
          } while (uVar5 < *(int *)(*(int *)(unaff_EBP + 8) + 4) - 1U);
        }
        puVar2 = param_1 + 0x94;
        if (0xf < (uint)param_1[0x99]) {
          puVar2 = (undefined4 *)param_1[0x94];
        }
        iVar4 = (int)uVar11;
        iVar6 = iVar4;
        (**(code **)(*(int *)*param_1 + 4))(puVar2,iVar4);
        iVar10 = (int)((ulonglong)uVar11 >> 0x20);
        (*(code *)**(undefined4 **)*param_1)(0x22);
        FUN_10056e10(iVar10 + 0x10,unaff_BL);
        puVar8 = (undefined4 *)&DAT_1034bbfc;
        (**(code **)(*(int *)*param_1 + 4))(&DAT_1034bbfc,3);
        FUN_10056588(iVar6 + 0x28,1,unaff_BL,param_5,iVar4);
        (*(code *)**(undefined4 **)*param_1)(10);
        if (0xf < (uint)param_1[0x99]) {
          puVar8 = (undefined4 *)param_1[0x94];
        }
        iVar6 = *(int *)*param_1;
        goto LAB_10056bf1;
      }
      uVar11 = 0x7b10056b05;
      (*(code *)*puVar2)();
      uStack_20 = *(undefined4 *)**(undefined4 **)(param_2 + 8);
      if ((*(undefined4 **)(param_2 + 8))[1] != 1) {
        uVar5 = 0;
        do {
          iVar6 = (int)((ulonglong)uVar11 >> 0x20);
          (*(code *)**(undefined4 **)*param_1)(0x22);
          FUN_10056e10(iStack_24 + 0x10,0);
          (**(code **)(*(int *)*param_1 + 4))(&DAT_1033da8e,2);
          FUN_10056588(iVar6 + 0x28,0,0,unaff_retaddr,param_2);
          (*(code *)**(undefined4 **)*param_1)(0x2c);
          uVar5 = uVar5 + 1;
          uVar11 = CONCAT44(iVar6,0x10056b71);
          FUN_10016fb8();
        } while (uVar5 < *(int *)(*(int *)(param_2 + 8) + 4) - 1U);
      }
      (*(code *)**(undefined4 **)*param_1)(0x22);
      FUN_10056e10(iStack_24 + 0x10,(uint)param_2 & 0xff);
      (**(code **)(*(int *)*param_1 + 4))(&DAT_1033da8e,2);
      FUN_10056588(iStack_1c + 0x28,0,(uint)param_2 & 0xff,param_5,param_6);
LAB_10056bf4:
      puVar2 = *(undefined4 **)*param_1;
      goto LAB_10056bfa;
    }
    uVar11 = 0x21032fb35;
    goto LAB_10056c09;
  case 2:
    puVar2 = *(undefined4 **)*param_1;
    if (**(int **)(param_2 + 8) != (*(int **)(param_2 + 8))[1]) {
      if (param_3 == '\0') {
        (*(code *)*puVar2)();
        iVar6 = **(int **)(param_2 + 8);
        iVar4 = (*(int **)(param_2 + 8))[1] + -0x10;
        if (iVar6 != iVar4) {
          uStack_28 = param_4 & 0xff;
          do {
            FUN_10056588(iVar6,0,uStack_28,param_5,param_6);
            (*(code *)**(undefined4 **)*param_1)();
            iVar6 = iVar6 + 0x10;
            iVar4 = *(int *)(*(int *)(param_2 + 8) + 4) + -0x10;
          } while (iVar6 != iVar4);
        }
        FUN_10056588(iVar4,0,param_4 & 0xff,param_5,param_6);
      }
      else {
        (*(code *)puVar2[1])(&DAT_1034d4b1,2);
        uVar12 = (ulonglong)(param_4 + param_5);
        if ((uint)param_1[0x98] < param_4 + param_5) {
          FUN_1000396a(param_1[0x98] * 2,0x20);
        }
        uVar9 = (undefined4)uVar12;
        iVar6 = **(int **)(unaff_EBP + 8);
        if (iVar6 != (*(int **)(unaff_EBP + 8))[1] + -0x10) {
          uStack_28 = (uint)param_2 & 0xff;
          do {
            puVar2 = param_1 + 0x94;
            if (0xf < (uint)param_1[0x99]) {
              puVar2 = (undefined4 *)param_1[0x94];
            }
            uVar9 = (undefined4)uVar12;
            (**(code **)(*(int *)*param_1 + 4))(puVar2,uVar9);
            FUN_10056588(iVar6,1,(int)uVar12,param_5,uVar9);
            (**(code **)(*(int *)*param_1 + 4))(&DAT_10355429,2);
            uVar9 = (undefined4)uVar12;
            iVar6 = iVar6 + 0x10;
          } while (iVar6 != *(int *)(*(int *)(unaff_EBP + 8) + 4) + -0x10);
        }
        puVar2 = param_1 + 0x94;
        if (0xf < (uint)param_1[0x99]) {
          puVar2 = (undefined4 *)param_1[0x94];
        }
        (**(code **)(*(int *)*param_1 + 4))(puVar2,uVar9);
        FUN_10056588(*(int *)(*(int *)(unaff_EDI + 8) + 4) + -0x10,1,unaff_EBP & 0xff,param_5,uVar9)
        ;
        (*(code *)**(undefined4 **)*param_1)(10);
        if (0xf < (uint)param_1[0x99]) {
          puVar2 = (undefined4 *)param_1[0x94];
        }
        (**(code **)(*(int *)*param_1 + 4))(puVar2,unaff_retaddr);
      }
      puVar2 = *(undefined4 **)*param_1;
      goto LAB_10056bfa;
    }
    uVar11 = 0x21033b8eb;
    goto LAB_10056c09;
  case 3:
    (*(code *)**(undefined4 **)*param_1)();
    FUN_10056e10(*(undefined4 *)(param_2 + 8),param_4 & 0xff);
    puVar2 = *(undefined4 **)*param_1;
LAB_10056bfa:
    (*(code *)*puVar2)();
    break;
  case 4:
    if (param_2[8] == '\x01') {
      uVar11 = 0x410338ab9;
    }
    else {
      uVar11 = 0x510338e2d;
    }
    (**(code **)(*(int *)*param_1 + 4))(uVar11);
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
    if (param_3 != '\0') {
      uVar11 = 0x21034c849;
      (**(code **)(*(int *)*param_1 + 4))();
      uVar5 = param_5 + param_6;
      puVar2 = param_1 + 0x94;
      if ((uint)param_1[0x98] < uVar5) {
        FUN_1000396a(param_1[0x98] * 2,0x20);
      }
      if (0xf < (uint)param_1[0x99]) {
        puVar2 = (undefined4 *)param_1[0x94];
      }
      (**(code **)(*(int *)*param_1 + 4))(puVar2,uVar5);
      (**(code **)(*(int *)*param_1 + 4))(&DAT_1033b938,10);
      uVar1 = local_14;
      iVar6 = (int)((ulonglong)uVar11 >> 0x20);
      puVar7 = (undefined1 *)**(undefined4 **)(param_2 + 8);
      puVar3 = (undefined1 *)(*(undefined4 **)(param_2 + 8))[1];
      if (puVar7 != puVar3) {
        puVar3 = puVar3 + -1;
        if (puVar7 != puVar3) {
          do {
            FUN_100573c0(*puVar7);
            (**(code **)(*(int *)*param_1 + 4))(&DAT_1034bc80,2);
            iVar6 = (int)((ulonglong)uVar11 >> 0x20);
            puVar7 = puVar7 + 1;
            puVar3 = (undefined1 *)(*(int *)(*(int *)(uVar1 + 8) + 4) + -1);
          } while (puVar7 != puVar3);
        }
        FUN_100573c0(*puVar3);
      }
      puVar8 = param_1 + 0x94;
      (**(code **)(*(int *)*param_1 + 4))(&DAT_10355428,3);
      puVar2 = puVar8;
      if (0xf < (uint)param_1[0x99]) {
        puVar2 = (undefined4 *)param_1[0x94];
      }
      (**(code **)(*(int *)*param_1 + 4))(puVar2,uVar5);
      (**(code **)(*(int *)*param_1 + 4))(&DAT_1034bbf4,0xb);
      iVar6 = *(int *)(iVar6 + 8);
      if (*(char *)(iVar6 + 0x18) == '\x01') {
        FUN_10057450(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
      }
      else {
        (**(code **)(*(int *)*param_1 + 4))("null",4);
      }
      (*(code *)**(undefined4 **)*param_1)(10);
      if (0xf < (uint)param_1[0x99]) {
        puVar8 = (undefined4 *)param_1[0x94];
      }
      iVar6 = *(int *)*param_1;
LAB_10056bf1:
      (**(code **)(iVar6 + 4))(puVar8,unaff_EDI);
      goto LAB_10056bf4;
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
    iVar6 = *(int *)(param_2 + 8);
    if (*(char *)(iVar6 + 0x18) == '\x01') {
      FUN_10057450(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
      goto LAB_10056bf4;
    }
    puVar2 = *(undefined4 **)*param_1;
    uVar11 = 0x51032fbab;
    goto LAB_10056c09;
  case 9:
    puVar2 = *(undefined4 **)*param_1;
    uVar11 = 0xb1033cf99;
LAB_10056c09:
    (*(code *)puVar2[1])(uVar11);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&uStack_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

