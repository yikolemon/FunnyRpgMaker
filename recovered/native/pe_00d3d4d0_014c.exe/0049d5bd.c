/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049d5bd */

undefined4 * FUN_0049d5bd(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = FUN_00497060(0x40,0x38);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (puVar2 != puVar2 + 0x380) {
    puVar3 = puVar2 + 8;
    do {
      FUN_004969d7((LPCRITICAL_SECTION)(puVar3 + -8),4000,0);
      puVar3[-2] = 0xffffffff;
      *(byte *)((int)puVar3 + 0xd) = *(byte *)((int)puVar3 + 0xd) & 0xf8;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar1 = puVar3 + 6;
      puVar3[2] = 0xa0a0000;
      *(undefined1 *)(puVar3 + 3) = 10;
      *(undefined4 *)((int)puVar3 + 0xe) = 0;
      *(undefined1 *)((int)puVar3 + 0x12) = 0;
      puVar3 = puVar3 + 0xe;
    } while (puVar1 != puVar2 + 0x380);
  }
  FUN_00495f00((LPVOID)0x0);
  return puVar2;
}

