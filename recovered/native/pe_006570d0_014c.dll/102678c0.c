/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102678c0 */

undefined4 FUN_102678c0(undefined4 param_1,int param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  switch(param_1) {
  case 0:
    uVar2 = FUN_10267fda(param_2,param_3);
    break;
  case 1:
    uVar2 = FUN_10267ffb(param_2,param_3);
    break;
  case 2:
    uVar4 = 0;
    uVar3 = 0x80000000;
    cVar1 = *(char *)(param_2 + 0x308);
    goto LAB_10267909;
  case 3:
    uVar4 = 0x7f800000;
    if (*(char *)(param_2 + 0x308) != '\0') {
      uVar4 = 0xff800000;
    }
    uVar4 = uVar4 | *param_3 & 0x7f800000;
    goto LAB_10267939;
  case 4:
    uVar3 = 0xffffffff;
    uVar4 = 0x7fffffff;
    cVar1 = *(char *)(param_2 + 0x308);
LAB_10267909:
    if (cVar1 != '\0') {
      uVar4 = uVar3;
    }
    *param_3 = uVar4;
LAB_10267911:
    uVar2 = 0;
    break;
  case 5:
    uVar4 = 0x7f800000;
    if (*(char *)(param_2 + 0x308) != '\0') {
      uVar4 = 0xff800000;
    }
    uVar4 = uVar4 | *param_3 & 0x7f800000 | 1;
LAB_10267939:
    *param_3 = uVar4;
    goto LAB_10267911;
  case 6:
    *param_3 = 0xffc00000;
    goto LAB_10267911;
  case 7:
    *param_3 = 0;
  default:
    uVar2 = 1;
    break;
  case 8:
    uVar4 = 0;
    uVar2 = 2;
    if (*(char *)(param_2 + 0x308) != '\0') {
      uVar4 = 0x80000000;
    }
    *param_3 = uVar4;
    break;
  case 9:
    uVar4 = 0x7f800000;
    uVar2 = 3;
    if (*(char *)(param_2 + 0x308) != '\0') {
      uVar4 = 0xff800000;
    }
    *param_3 = uVar4 | *param_3 & 0x7f800000;
  }
  return uVar2;
}

