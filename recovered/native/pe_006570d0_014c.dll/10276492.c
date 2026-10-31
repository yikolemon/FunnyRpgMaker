/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10276492 */

void FUN_10276492(void)

{
  byte bVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  _STARTUPINFOW local_4c;
  uint local_8;
  
  GetStartupInfoW(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((uint *)local_4c.lpReserved2 != (uint *)0x0)) {
    uVar6 = *(uint *)local_4c.lpReserved2;
    piVar5 = (int *)((int)local_4c.lpReserved2 + uVar6 + 4);
    uVar3 = 0x2000;
    if ((int)uVar6 < 0x2000) {
      uVar3 = uVar6;
    }
    FUN_1027addf(uVar3);
    if ((int)DAT_103a5430 < (int)uVar3) {
      uVar3 = DAT_103a5430;
    }
    uVar6 = 0;
    local_8 = uVar3;
    if (uVar3 != 0) {
      do {
        if ((((*piVar5 != -1) && (*piVar5 != -2)) &&
            (bVar1 = *(byte *)(uVar6 + 4 + (int)local_4c.lpReserved2), (bVar1 & 1) != 0)) &&
           (((bVar1 & 8) != 0 || (DVar2 = GetFileType((HANDLE)*piVar5), uVar3 = local_8, DVar2 != 0)
            ))) {
          iVar4 = (uVar6 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)uVar6 >> 6];
          *(int *)(iVar4 + 0x18) = *piVar5;
          *(undefined1 *)(iVar4 + 0x28) = *(undefined1 *)(uVar6 + 4 + (int)local_4c.lpReserved2);
          uVar3 = local_8;
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar6 != uVar3);
    }
  }
  return;
}

