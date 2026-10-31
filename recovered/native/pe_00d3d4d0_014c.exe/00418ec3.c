/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418ec3 */

void * __cdecl FUN_00418ec3(void *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  size_t sVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 local_18;
  
  uVar1 = DAT_0050e8c0 ^ (uint)&stack0xffffffd0;
  puVar4 = param_2;
  sVar2 = _strlen((char *)param_2);
  if ((param_3[4] ^ 0x7fffffff) < sVar2) {
    FUN_004027e3();
  }
  else {
    puVar3 = param_3;
    if (0xf < param_3[5]) {
      puVar3 = (uint *)*param_3;
    }
    FUN_00418f52(param_1,CONCAT31((int3)((uint)puVar4 >> 8),local_18),param_3,param_2,sVar2,puVar3,
                 param_3[4]);
    if (DAT_0050e8c0 == (uVar1 ^ (uint)&stack0xffffffd0)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(uVar1 ^ (uint)&stack0xffffffd0);
}

