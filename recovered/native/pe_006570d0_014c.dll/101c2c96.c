/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2c96 */

undefined4 FUN_101c2c96(int param_1,int param_2,undefined1 *param_3,int param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x23;
  }
  else {
    if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
      *param_3 = 0;
      if (*(int *)(param_1 + 0x10) <= param_2) {
        return 0x10;
      }
      if ((*(byte *)(param_1 + 9) & 2) != 0) {
        iVar4 = *(int *)(param_1 + 0x80);
        puVar2 = *(undefined4 **)(iVar4 + 0x28);
        if (puVar2 != (undefined4 *)0xfffffffe) {
          if (puVar2 == (undefined4 *)0x0) {
            pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
            if (pcVar1 == (code *)0x0) {
              puVar2 = (undefined4 *)0x0;
            }
            else {
              puVar2 = (undefined4 *)(*pcVar1)(*(int **)(param_1 + 0x60),"glyph-dict");
              iVar4 = *(int *)(param_1 + 0x80);
            }
            puVar5 = (undefined4 *)0xfffffffe;
            if (puVar2 != (undefined4 *)0x0) {
              puVar5 = puVar2;
            }
            *(undefined4 **)(iVar4 + 0x28) = puVar5;
          }
          if (puVar2 != (undefined4 *)0x0) {
            if ((code *)*puVar2 == (code *)0x0) {
              return 6;
            }
                    /* WARNING: Could not recover jumptable at 0x101c2d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*(code *)*puVar2)();
            return uVar3;
          }
        }
      }
    }
    uVar3 = 6;
  }
  return uVar3;
}

