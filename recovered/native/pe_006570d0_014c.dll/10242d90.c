/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10242d90 */

undefined1 * FUN_10242d90(undefined4 param_1,undefined1 *param_2,char param_3,uint param_4)

{
  undefined2 *puVar1;
  char *pcVar2;
  uint uVar3;
  
  *param_2 = 0x25;
  puVar1 = (undefined2 *)(param_2 + 1);
  if ((param_4 & 0x20) != 0) {
    *(undefined1 *)puVar1 = 0x2b;
    puVar1 = (undefined2 *)(param_2 + 2);
  }
  if ((param_4 & 0x10) != 0) {
    *(undefined1 *)puVar1 = 0x23;
    puVar1 = (undefined2 *)((int)puVar1 + 1);
  }
  *puVar1 = 0x2a2e;
  pcVar2 = (char *)(puVar1 + 1);
  if (param_3 != '\0') {
    *pcVar2 = param_3;
    pcVar2 = (char *)((int)puVar1 + 3);
  }
  uVar3 = param_4 & 0x3000;
  if ((param_4 & 4) == 0) {
    if (uVar3 == 0x2000) {
      *pcVar2 = 'f';
      pcVar2[1] = '\0';
      return param_2;
    }
    if (uVar3 == 0x3000) {
      *pcVar2 = 'a';
      pcVar2[1] = '\0';
      return param_2;
    }
    *pcVar2 = (uVar3 != 0x1000) * '\x02' + 'e';
    pcVar2[1] = '\0';
    return param_2;
  }
  if (uVar3 == 0x2000) {
    *pcVar2 = 'F';
    pcVar2[1] = '\0';
    return param_2;
  }
  if (uVar3 == 0x3000) {
    *pcVar2 = 'A';
    pcVar2[1] = '\0';
    return param_2;
  }
  *pcVar2 = (uVar3 != 0x1000) * '\x02' + 'E';
  pcVar2[1] = '\0';
  return param_2;
}

