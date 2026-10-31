/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010a588 */

void FUN_1010a588(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar2 = *(int *)(iVar2 + 0x14cc);
  FUN_10188384();
  puVar1 = (undefined4 *)
           (*(int *)(*(int *)(iVar2 + 0x2e8) + 0x8c) + -0x10 +
           *(int *)(*(int *)(iVar2 + 0x2e8) + 0x84) * 0x10);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(iVar2 + 0x28c) = *puVar1;
  *(undefined4 *)(iVar2 + 0x290) = uVar3;
  *(undefined4 *)(iVar2 + 0x294) = uVar4;
  *(undefined4 *)(iVar2 + 0x298) = uVar5;
  return;
}

