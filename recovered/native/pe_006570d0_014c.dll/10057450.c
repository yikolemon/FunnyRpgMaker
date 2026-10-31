/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10057450 */

void __thiscall FUN_10057450(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_3,param_2);
  if (param_2 == 0 && param_3 == 0) {
    (*(code *)**(undefined4 **)*param_1)(0x30);
    return;
  }
  if (param_3 < (param_2 < 10)) {
    iVar3 = (int)param_1 + 9;
    iVar4 = 1;
  }
  else {
    iVar3 = 4;
    uVar6 = uVar7;
    do {
      iVar4 = iVar3;
      uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
      uVar1 = (uint)uVar6;
      if (uVar5 == 0 && (uint)(99 < uVar1) <= -uVar5) {
        iVar4 = iVar4 + -2;
        goto LAB_100574fd;
      }
      if (uVar5 == 0 && (uint)(999 < uVar1) <= -uVar5) {
        iVar4 = iVar4 + -1;
        goto LAB_100574fd;
      }
      if (uVar5 < (uVar1 < 10000)) goto LAB_100574fd;
      uVar6 = __aulldiv(uVar6,10000,0);
      iVar3 = iVar4 + 4;
    } while (uVar5 != 0 || -uVar5 < (uint)(99999 < uVar1));
    iVar4 = iVar4 + 1;
LAB_100574fd:
    iVar3 = iVar4 + (int)(param_1 + 2);
    if ((param_2 < 100) <= param_3) {
      do {
        iVar2 = (int)((ulonglong)uVar7 >> 0x20);
        uVar1 = (uint)uVar7;
        uVar7 = __aulldiv(uVar7,100,0);
        *(undefined2 *)(iVar3 + -2) = (&DAT_1028b698)[(int)uVar7 * -100 + uVar1];
        iVar3 = iVar3 + -2;
      } while (iVar2 != 0 || (uint)-iVar2 < (uint)(9999 < uVar1));
    }
    param_2 = (uint)uVar7;
    if ((uint)(param_2 < 10) <= (uint)((ulonglong)uVar7 >> 0x20)) {
      *(undefined2 *)(iVar3 + -2) = (&DAT_1028b698)[param_2];
      goto LAB_1005757b;
    }
  }
  *(byte *)(iVar3 + -1) = (byte)param_2 | 0x30;
LAB_1005757b:
  (**(code **)(*(int *)*param_1 + 4))(param_1 + 2,iVar4);
  return;
}

