/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017400c */

void __fastcall FUN_1017400c(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar2 = *(undefined1 **)(param_1 + 0xac);
    if (puVar2 < *(undefined1 **)(param_1 + 0xb0)) {
LAB_1017403f:
      *(undefined1 **)(param_1 + 0xac) = puVar2 + 1;
      uVar1 = *puVar2;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        puVar2 = *(undefined1 **)(param_1 + 0xac);
        goto LAB_1017403f;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + 2 + iVar3 * 4) = uVar1;
    puVar2 = *(undefined1 **)(param_1 + 0xac);
    if (puVar2 < *(undefined1 **)(param_1 + 0xb0)) {
LAB_1017406f:
      *(undefined1 **)(param_1 + 0xac) = puVar2 + 1;
      uVar1 = *puVar2;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        puVar2 = *(undefined1 **)(param_1 + 0xac);
        goto LAB_1017406f;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + 1 + iVar3 * 4) = uVar1;
    puVar2 = *(undefined1 **)(param_1 + 0xac);
    if (puVar2 < *(undefined1 **)(param_1 + 0xb0)) {
LAB_1017409f:
      *(undefined1 **)(param_1 + 0xac) = puVar2 + 1;
      uVar1 = *puVar2;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        puVar2 = *(undefined1 **)(param_1 + 0xac);
        goto LAB_1017409f;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + iVar3 * 4) = uVar1;
    *(char *)(param_2 + 3 + iVar3 * 4) = -(param_4 != iVar3);
    iVar3 = iVar3 + 1;
    if (param_3 == iVar3) {
      return;
    }
  } while( true );
}

