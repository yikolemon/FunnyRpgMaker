/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e7f58 */

bool FUN_1407e7f58(ulonglong param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  uint unaff_retaddr;
  
  puVar3 = (undefined2 *)(ulonglong)unaff_retaddr;
  puVar2 = (uint *)FUN_1407e8005();
  if (unaff_retaddr != 0 && (int)puVar2 != 0) {
    *puVar3 = (short)*puVar2;
    puVar3[1] = *(undefined2 *)((longlong)puVar2 + 2);
    puVar3[2] = (short)puVar2[1];
    puVar3[3] = *(undefined2 *)((longlong)puVar2 + 6);
    uVar1 = *(undefined8 *)((param_1 & 0xffffffff) + 0x44);
    *(ulonglong *)(puVar3 + 4) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) * (float)(*puVar2 >> 0x10),
                  (float)uVar1 * (float)(*puVar2 & 0xffff));
    uVar1 = *(undefined8 *)((param_1 & 0xffffffff) + 0x44);
    *(ulonglong *)(puVar3 + 8) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) *
                  (float)((puVar2[1] >> 0x10) + (*puVar2 >> 0x10)),
                  (float)uVar1 * (float)((puVar2[1] & 0xffff) + (*puVar2 & 0xffff)));
  }
  return (int)puVar2 != 0;
}

