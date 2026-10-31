/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10174b05 */

int __fastcall FUN_10174b05(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0x80;
  iVar5 = 0;
  do {
    if ((param_2 & uVar4) != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
LAB_10174b3c:
        puVar3 = *(undefined1 **)(param_1 + 0xac);
        if (*(undefined1 **)(param_1 + 0xb0) <= puVar3) {
LAB_10174b8d:
          FUN_10170e07();
          return 0;
        }
LAB_10174b4a:
        *(undefined1 **)(param_1 + 0xac) = puVar3 + 1;
        uVar2 = *puVar3;
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
        if (iVar1 != 0) {
          if (*(int *)(param_1 + 0x20) == 0) goto LAB_10174b8d;
          goto LAB_10174b3c;
        }
        puVar3 = *(undefined1 **)(param_1 + 0xac);
        if (puVar3 < *(undefined1 **)(param_1 + 0xb0)) goto LAB_10174b4a;
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_10170e8c();
          puVar3 = *(undefined1 **)(param_1 + 0xac);
          goto LAB_10174b4a;
        }
        uVar2 = 0;
      }
      *(undefined1 *)(param_3 + iVar5) = uVar2;
    }
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 >> 1;
    if (iVar5 == 4) {
      return param_3;
    }
  } while( true );
}

