/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd0c3 */

void FUN_1407bd0c3(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff0 - 0x18);
  uVar2 = (ulonglong)*(uint *)((ulonglong)(uint)puVar3[10] + 0x10);
  uVar1 = *(undefined4 *)(uVar2 + 8 + (ulonglong)(uint)(puVar3[0xb] * 0x74));
  puVar3[2] = *(undefined4 *)(uVar2 + 0xc + (ulonglong)(uint)(puVar3[0xb] * 0x74));
  puVar3[1] = *(undefined4 *)((ulonglong)(uint)puVar3[10] + 0xe4);
  *puVar3 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -2) = &UNK_1407bd102;
  FUN_140755a9a();
}

