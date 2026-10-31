/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dba9a */

undefined4 __thiscall FUN_100dba9a(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pcVar2 = (char *)*param_1;
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = 0x80000000;
  cVar1 = *pcVar2;
  if (cVar1 == '\0') {
    uVar6 = 1;
  }
  else if (cVar1 == '\x02') {
    uVar5 = **(undefined4 **)(pcVar2 + 8);
  }
  else if (cVar1 == '\x01') {
    uVar4 = *(undefined4 *)**(undefined4 **)(pcVar2 + 8);
  }
  else {
    uVar6 = 0;
  }
  FUN_100dc11e(pcVar2,uVar4,uVar5,uVar6,0);
  if (DAT_10388d00 == (uVar3 ^ (uint)&stack0xfffffffc)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

