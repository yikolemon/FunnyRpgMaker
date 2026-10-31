/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005758e */

void __thiscall FUN_1005758e(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_3,param_2);
  if (param_2 == 0 && param_3 == 0) {
    (*(code *)**(undefined4 **)*param_1)(0x30);
    return;
  }
  puVar1 = param_1 + 2;
  if ((int)param_3 < 0) {
    *(undefined1 *)puVar1 = 0x2d;
    bVar7 = param_2 != 0;
    param_2 = -param_2;
    param_3 = -(uint)bVar7 - param_3;
    uVar8 = CONCAT44(param_3,param_2);
    if (param_3 < (param_2 < 10)) {
      iVar3 = 1;
    }
    else {
      iVar4 = 4;
      do {
        iVar3 = iVar4;
        uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
        uVar2 = (uint)uVar8;
        if (uVar5 == 0 && (uint)(99 < uVar2) <= -uVar5) {
          iVar3 = iVar3 + -2;
          goto LAB_100576e6;
        }
        if (uVar5 == 0 && (uint)(999 < uVar2) <= -uVar5) {
          iVar3 = iVar3 + -1;
          goto LAB_100576e6;
        }
        if (uVar5 < (uVar2 < 10000)) goto LAB_100576e6;
        uVar8 = __aulldiv(uVar8,10000,0);
        iVar4 = iVar3 + 4;
      } while (uVar5 != 0 || -uVar5 < (uint)(99999 < uVar2));
      iVar3 = iVar3 + 1;
    }
LAB_100576e6:
    iVar3 = iVar3 + 1;
LAB_100576e7:
    uVar8 = CONCAT44(param_3,param_2);
    puVar6 = (undefined1 *)((int)puVar1 + iVar3);
    if ((param_2 < 100) <= param_3) {
      do {
        iVar4 = (int)((ulonglong)uVar8 >> 0x20);
        uVar2 = (uint)uVar8;
        uVar8 = __aulldiv(uVar8,100,0);
        *(undefined2 *)(puVar6 + -2) = (&DAT_1028b698)[(int)uVar8 * -100 + uVar2];
        puVar6 = puVar6 + -2;
      } while (iVar4 != 0 || (uint)-iVar4 < (uint)(9999 < uVar2));
    }
    param_2 = (uint)uVar8;
    if ((uint)(param_2 < 10) <= (uint)((ulonglong)uVar8 >> 0x20)) {
      *(undefined2 *)(puVar6 + -2) = (&DAT_1028b698)[param_2];
      goto LAB_10057761;
    }
  }
  else {
    if ((param_2 < 10) <= param_3) {
      iVar4 = 4;
      do {
        iVar3 = iVar4;
        uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
        uVar2 = (uint)uVar8;
        if (uVar5 == 0 && (uint)(99 < uVar2) <= -uVar5) {
          iVar3 = iVar3 + -2;
          goto LAB_100576e7;
        }
        if (uVar5 == 0 && (uint)(999 < uVar2) <= -uVar5) {
          iVar3 = iVar3 + -1;
          goto LAB_100576e7;
        }
        if (uVar5 < (uVar2 < 10000)) goto LAB_100576e7;
        uVar8 = __aulldiv(uVar8,10000,0);
        iVar4 = iVar3 + 4;
      } while (uVar5 != 0 || -uVar5 < (uint)(99999 < uVar2));
      iVar3 = iVar3 + 1;
      goto LAB_100576e7;
    }
    puVar6 = (undefined1 *)((int)param_1 + 9);
    iVar3 = 1;
  }
  puVar6[-1] = (byte)param_2 | 0x30;
LAB_10057761:
  (**(code **)(*(int *)*param_1 + 4))(puVar1,iVar3);
  return;
}

