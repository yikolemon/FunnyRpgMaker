/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ad2f */

/* Library Function - Single Match
    ___acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined4 * ___acrt_lowio_create_handle_array(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_10275d90(0x40,0x38);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (puVar2 != puVar2 + 0x380) {
    puVar3 = puVar2 + 8;
    do {
      FUN_10274cf2(puVar3 + -8,4000,0);
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
  FUN_10274120(0);
  return puVar2;
}

