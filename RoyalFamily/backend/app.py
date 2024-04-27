from flask import Flask
from flask_cors import CORS
import subprocess

app = Flask(__name__)
CORS(app)


@app.route('/is-monarca/<name>')
def is_monarca(name):  # put application's code here
    result = subprocess.run(['./main', '1', name], capture_output=True, text=True)
    return {
        "result": result.stdout.strip()
    }

@app.route('/is-only-child/<name>')
def is_only_child(name):
    result = subprocess.run(['./main', '2', name], capture_output=True, text=True)
    return {
        "result": result.stdout.strip()
    }

@app.route('/has_been_or_is_king/<name>')
def has_been_or_is_king(name):
    result = subprocess.run(['./main', '3', name], capture_output=True, text=True)
    return {
        "result": result.stdout.strip()
    }

@app.route('/has_been_or_is_queen/<name>')
def has_been_or_is_queen(name):
    result = subprocess.run(['./main', '4', name], capture_output=True, text=True)
    return {
        "result": result.stdout.strip()
    }

if __name__ == '__main__':
    app.run(port=5000, debug=True, host='0.0.0.0')
