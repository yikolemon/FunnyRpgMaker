/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1a2f */

undefined4 FUN_101c1a2f(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_14;
  uVar5 = 0xffffffff;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    piVar1 = *(int **)(*param_1 + 0x60);
    pcVar2 = *(code **)(*piVar1 + 0x20);
    if (pcVar2 != (code *)0x0) {
      puVar3 = (undefined4 *)(*pcVar2)(piVar1,"tt-cmaps");
      if (puVar3 != (undefined4 *)0x0) {
        iVar4 = (*(code *)*puVar3)(param_1,auStack_14);
        if (iVar4 == 0) {
          uVar5 = uStack_10;
        }
      }
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)auStack_14)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

