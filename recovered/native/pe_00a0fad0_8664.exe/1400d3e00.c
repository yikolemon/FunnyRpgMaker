/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3e00 */

undefined8 * FUN_1400d3e00(undefined1 param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1400d3680(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x24) = param_1;
    *puVar1 = std::locale::_Locimp::vftable;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[5] = 0;
    puVar2 = (undefined2 *)_malloc_base(2);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0x2a;
    }
    puVar1[5] = puVar2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

