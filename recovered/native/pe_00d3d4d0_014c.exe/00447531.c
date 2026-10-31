/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00447531 */

void __cdecl FUN_00447531(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(param_1 + 0x214);
  if (puVar5 != (uint *)0x0) {
    iVar1 = *(int *)(param_1 + 100);
    uVar4 = *puVar5;
    uVar3 = puVar5[1];
    FUN_0041c607(iVar1,puVar5[6]);
    puVar5[6] = 0;
    if (1 < uVar4) {
      _memset(puVar5 + 7,0,uVar4 * 4 - 4);
    }
    FUN_0041c607(iVar1,puVar5[0x36]);
    puVar5[0x36] = 0;
    FUN_0041c607(iVar1,puVar5[0x25]);
    puVar5[0x25] = 0;
    FUN_0041c607(iVar1,puVar5[0x48]);
    puVar5[0x48] = 0;
    if (uVar4 != 0) {
      uVar2 = 0;
      do {
        puVar5[uVar2 + 0x35] = 0;
        puVar5[uVar2 + 0x24] = 0;
        puVar5[uVar2 + 0x47] = 0;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    FUN_0041c607(iVar1,puVar5[0x22]);
    uVar4 = 0;
    puVar5[0x22] = 0;
    puVar5[0x23] = 0;
    if (uVar3 != 0) {
      do {
        FUN_0041c607(iVar1,puVar5[uVar4 + 2]);
        puVar5[uVar4 + 2] = 0;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
      puVar5 = puVar5 + 0x18;
      do {
        FUN_0041c607(iVar1,*puVar5);
        *puVar5 = 0;
        FUN_0041c607(iVar1,puVar5[-1]);
        puVar5[-1] = 0;
        *(undefined1 *)(puVar5 + -2) = 0;
        puVar5 = puVar5 + 3;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    FUN_0041c607(iVar1,*(int *)(param_1 + 0x214));
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return;
}

