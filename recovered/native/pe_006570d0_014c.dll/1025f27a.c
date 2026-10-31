/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f27a */

void FUN_1025f27a(undefined1 *param_1,int param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 *puVar4;
  
  uVar1 = *(undefined4 *)(param_4 + 0x18);
  uVar2 = *(undefined4 *)(param_4 + 0x1c);
  puVar4 = param_1 + param_2;
  do {
    if (param_1 == puVar4) {
LAB_1025f2e7:
      *(undefined4 *)(param_4 + 0x18) = uVar1;
      *(undefined4 *)(param_4 + 0x1c) = uVar2;
      return;
    }
    cVar3 = FUN_1025f331(*param_1,param_4);
    if (cVar3 == '\0') {
      if ((*(char *)(param_4 + 0x1c) == '\0') || (*(int *)(param_4 + 0x18) != 0x2a)) {
        *param_3 = -1;
        goto LAB_1025f2e7;
      }
      cVar3 = FUN_1025f331(0x3f,param_4);
      if (cVar3 != '\0') goto LAB_1025f2d1;
      *param_3 = -1;
    }
    else {
LAB_1025f2d1:
      *param_3 = *param_3 + 1;
    }
    param_1 = param_1 + 1;
  } while( true );
}

