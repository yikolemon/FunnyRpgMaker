/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e91d0 */

int FUN_1407e91d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  undefined1 *puVar4;
  ulonglong uVar5;
  int unaff_R13D;
  
  puVar4 = &stack0xffffffffffffffe0;
  uVar5 = (ulonglong)*(uint *)((unaff_RBX >> 0x20) + 0x290);
  iVar2 = *(int *)(uVar5 + 0xac);
  if (0 < iVar2) {
    do {
      if (((*(int *)((ulonglong)*(uint *)(ulonglong)*(uint *)(uVar5 + 0xbc) + 0x40) +
            *(int *)(puVar4 + 0x18) <=
            *(int *)((ulonglong)*(uint *)((ulonglong)*(uint *)(puVar4 + 0x14) + 0x290) + 0x94)) &&
          (uVar3 = (ulonglong)*(uint *)(ulonglong)*(uint *)(uVar5 + 0xbc),
          (*(byte *)(uVar3 + 0x3f) & 4) == 0)) &&
         (uVar1 = *(uint *)(uVar3 + 0x48), (*(byte *)((ulonglong)uVar1 + 8) & 8) == 0)) {
        *(ulonglong *)(puVar4 + -8) = uVar3;
        *(ulonglong *)(puVar4 + -0x10) = (ulonglong)uVar1;
        *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + 0xc);
        *(undefined8 *)(puVar4 + -0x20) = 0x1407e9239;
        FUN_1407e9023();
        puVar4 = (undefined1 *)(ulonglong)((int)(puVar4 + -0x18) + 0xc);
        iVar2 = *(int *)(uVar5 + 0xac);
      }
    } while (unaff_R13D < param_3);
  }
  return iVar2;
}

