/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e73aa */

ulonglong FUN_1407e73aa(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  undefined1 *puVar3;
  ulonglong uVar4;
  int unaff_R13D;
  
  puVar3 = &stack0xffffffffffffffe0;
  uVar1 = unaff_RBX >> 0x20;
  uVar4 = (ulonglong)*(uint *)(uVar1 + 0x290);
  if ((*(uint *)(uVar1 + 0x290) != 0) &&
     (uVar1 = (ulonglong)*(uint *)(uVar4 + 0xac), 0 < (int)*(uint *)(uVar4 + 0xac))) {
    do {
      if ((*(int *)((ulonglong)*(uint *)(ulonglong)*(uint *)(uVar4 + 0xbc) + 0x40) +
           *(int *)(puVar3 + 0x1c) <=
           *(int *)((ulonglong)*(uint *)((ulonglong)*(uint *)(puVar3 + 0x14) + 0x290) + 0x94)) &&
         ((uVar2 = (ulonglong)*(uint *)(ulonglong)*(uint *)(uVar4 + 0xbc),
          *(int *)(uVar2 + 0x48) == *(int *)(puVar3 + 0x18) && ((*(byte *)(uVar2 + 0x3f) & 4) == 0))
         )) {
        *(ulonglong *)(puVar3 + -8) = uVar2;
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + 0x14);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + 0xc);
        *(undefined8 *)(puVar3 + -0x20) = 0x1407e741a;
        FUN_1407e9023();
        puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -0x18) + 0xc);
        uVar1 = (ulonglong)*(uint *)(uVar4 + 0xac);
      }
    } while (unaff_R13D < param_3);
  }
  return uVar1;
}

