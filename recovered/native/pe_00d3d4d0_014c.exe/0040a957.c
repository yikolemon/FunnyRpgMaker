/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040a957 */

uint * __cdecl FUN_0040a957(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  uint uVar3;
  
  sVar1 = _strlen((char *)param_1);
  uVar3 = sVar1 + 1;
  puVar2 = (uint *)FUN_00490470(uVar3,1);
  if (puVar2 != (uint *)0x0) {
    if (uVar3 != 0) {
      FUN_004878c0(puVar2,param_1,uVar3);
    }
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f870();
}

