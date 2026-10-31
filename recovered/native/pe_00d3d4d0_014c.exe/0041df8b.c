/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041df8b */

undefined4 __cdecl FUN_0041df8b(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  uVar5 = 0x26;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = *(int *)(param_1 + 0x24);
    if (0 < iVar2) {
      puVar4 = puVar1 + iVar2 + -1;
      do {
        piVar3 = (int *)*puVar4;
        if (piVar3[1] == 0x756e6963) {
          if ((short)piVar3[2] == 0) {
            if (*(short *)((int)piVar3 + 10) == 6) {
              iVar2 = FUN_0041e01f(piVar3);
              if (iVar2 == 0xd) {
                piVar3 = (int *)*puVar4;
                goto LAB_0041e00e;
              }
            }
            else if (*(short *)((int)piVar3 + 10) == 4) goto LAB_0041e00e;
          }
          else if (((short)piVar3[2] == 3) && (*(short *)((int)piVar3 + 10) == 10))
          goto LAB_0041e00e;
        }
        puVar4 = puVar4 + -1;
      } while (puVar1 <= puVar4);
      iVar2 = *(int *)(param_1 + 0x24);
    }
    puVar4 = puVar1 + iVar2;
    do {
      puVar4 = puVar4 + -1;
      if (puVar4 < puVar1) {
        return 0x26;
      }
      piVar3 = (int *)*puVar4;
    } while (piVar3[1] != 0x756e6963);
LAB_0041e00e:
    *(int **)(param_1 + 0x5c) = piVar3;
    uVar5 = 0;
  }
  return uVar5;
}

