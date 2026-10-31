/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d320 */

void __thiscall FUN_1001d320(int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 != 0 && param_2 != param_3) {
    do {
      switch(*(undefined4 *)(param_2 + 4)) {
      case 7:
        if (param_4 == 0) {
LAB_1001d40e:
          param_4 = 0;
        }
        else if ((((*(int *)(param_2 + 0x14) != 0) &&
                  ((((*(int *)(param_2 + 0x18) != 0 || (*(int *)(param_2 + 0x1c) != 0)) ||
                    (*(int *)(param_2 + 0x20) != 0)) ||
                   ((*(short *)(param_2 + 0x24) != 0 ||
                    (*(int *)(*(int *)(param_2 + 0x14) + 0x10) != 0)))))) ||
                 (*(int *)(param_2 + 0x28) != 0)) ||
                (((*(byte *)(param_1 + 0x41) & 8) != 0 &&
                 ((*(int *)(param_2 + 0x20) != 0 || ((*(byte *)(param_2 + 8) & 1) != 0)))))) {
          *(undefined4 *)(param_4 + 0x24) = 0;
          goto LAB_1001d443;
        }
        break;
      case 10:
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 0x24) = 0;
          *(byte *)(param_4 + 9) = *(byte *)(param_4 + 9) & 0xef;
        }
      case 0xb:
        FUN_1001d320(*(undefined4 *)(param_2 + 0x14),0,0,1);
        break;
      case 0xf:
        if ((param_5 == 0) && (param_4 != 0)) {
LAB_1001d443:
          *(byte *)(param_4 + 9) = *(byte *)(param_4 + 9) & 0xef;
        }
        break;
      case 0x10:
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 0x24) = 0;
          *(byte *)(param_4 + 9) = *(byte *)(param_4 + 9) & 0xef;
        }
        for (iVar1 = *(int *)(param_2 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
          FUN_1001d320(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x14),param_4,param_5);
        }
        break;
      case 0x12:
        if (param_4 == 0) {
          *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x10;
          param_4 = param_2;
        }
        else {
          *(undefined4 *)(param_4 + 0x24) = 0;
          *(byte *)(param_4 + 9) = *(byte *)(param_4 + 9) & 0xef;
          *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x10;
          bVar2 = *(uint *)(param_4 + 0x18) < 2 & param_5;
          if (bVar2 == 0) {
            *(undefined4 *)(param_2 + 0x24) = 0;
          }
          FUN_1001d320(*(undefined4 *)(param_2 + 0xc),
                       *(undefined4 *)(*(int *)(param_2 + 0x1c) + 0xc),param_2,bVar2);
          param_2 = *(int *)(param_2 + 0x1c);
        }
        break;
      case 0x13:
        if (param_4 == *(int *)(param_2 + 0x14)) {
          if (*(int *)(param_4 + 0x24) == -1) {
            *(undefined4 *)(param_4 + 0x24) = 1;
          }
          goto LAB_1001d40e;
        }
      }
      param_2 = *(int *)(param_2 + 0xc);
    } while ((param_2 != param_3) && (param_2 != 0));
  }
  return;
}

