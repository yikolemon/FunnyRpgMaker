import { serveFixture } from '../src/fixture-server.mjs';
const server = await serveFixture('work/mv-fixture', 8765);
console.log(`MV engine fixture: ${server.url}\nCtrl+C to stop. No original executable is run.`);
for (const signal of ['SIGINT', 'SIGTERM']) process.once(signal, async () => { await server.close(); process.exit(); });
