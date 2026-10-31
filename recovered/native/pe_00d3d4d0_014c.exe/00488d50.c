/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488d50 */

undefined4 __cdecl FUN_00488d50(undefined4 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_0050e8c0 & 0x1f;
  pcVar3 = (code *)((DAT_005216e8 ^ DAT_0050e8c0) >> bVar2 |
                   (DAT_005216e8 ^ DAT_0050e8c0) << 0x20 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  (*(code *)PTR_guard_check_icall_00508898)(param_1);
  uVar1 = (*pcVar3)();
  return uVar1;
}

