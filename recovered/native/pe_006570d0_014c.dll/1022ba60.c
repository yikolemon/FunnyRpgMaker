/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022ba60 */

undefined4 * FUN_1022ba60(undefined1 param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined4 *)FUN_10228350(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    *puVar1 = std::locale::_Locimp::vftable;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = param_1;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[6] = 0;
    puVar2 = (undefined2 *)FUN_1026faa0(2);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0x2a;
    }
    puVar1[6] = puVar2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

