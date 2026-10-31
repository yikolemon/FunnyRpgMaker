/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c0b0 */

void __thiscall FUN_0040c0b0(void *this,undefined1 *param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (*(uint *)this <= param_2) {
LAB_0040c0ec:
    *param_1 = 0;
    return;
  }
  uVar4 = *(uint *)(*(int *)((int)this + 4) + param_2 * 4);
  uVar7 = uVar4 >> 0x1c;
  if (0xc < uVar7 - 1) goto LAB_0040c0ec;
  iVar1 = *(int *)((int)this + 4) + *(uint *)this * 4;
  uVar4 = uVar4 & 0xfffffff;
  switch(uVar7) {
  case 1:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_1 = 1;
    goto LAB_0040c178;
  case 2:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_1 = 2;
    goto LAB_0040c178;
  case 3:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    uVar5 = *(undefined4 *)(iVar1 + 4 + uVar4);
    *param_1 = 3;
    goto LAB_0040c13c;
  case 4:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    uVar5 = *(undefined4 *)(iVar1 + 4 + uVar4);
    *param_1 = 4;
LAB_0040c13c:
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    *(undefined4 *)(param_1 + 8) = uVar6;
    break;
  case 5:
    uVar2 = *(undefined1 *)(iVar1 + uVar4);
    *param_1 = 5;
    param_1[8] = uVar2;
    break;
  case 6:
    uVar3 = *(undefined2 *)(iVar1 + uVar4);
    *param_1 = 6;
    *(undefined2 *)(param_1 + 8) = uVar3;
    break;
  case 7:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_1 = 7;
    *(undefined4 *)(param_1 + 8) = uVar6;
    break;
  case 8:
    uVar8 = *(undefined8 *)(iVar1 + uVar4);
    *param_1 = 8;
    goto LAB_0040c185;
  case 9:
    uVar8 = *(undefined8 *)(iVar1 + uVar4);
    *param_1 = 9;
    goto LAB_0040c185;
  case 10:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_1 = 10;
    goto LAB_0040c178;
  case 0xb:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    *param_1 = 0xb;
LAB_0040c178:
    *(undefined4 *)(param_1 + 8) = uVar6;
    break;
  case 0xc:
    uVar6 = *(undefined4 *)(iVar1 + uVar4);
    uVar5 = *(undefined4 *)(iVar1 + 4 + uVar4);
    *param_1 = 0xc;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    break;
  case 0xd:
    *param_1 = 0xd;
    uVar8 = *(undefined8 *)(iVar1 + uVar4);
LAB_0040c185:
    *(undefined8 *)(param_1 + 8) = uVar8;
  }
  return;
}

